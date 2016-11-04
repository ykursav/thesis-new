# -*- coding: utf-8 -*-
import math
import cv2
import numpy as np
import gc

# import time
SCALED_IMAGE = [128, 128]

class PreProcessing:
    def __init__(self, L, hist_eq):
        self.image = np.array([])
        self.L = L
        self.hist_eq = hist_eq
        self.width = 0
        self.height = 0
        self.resized_image = np.array([])
        self.warped = np.array([])

    def gray_image(self, image):
        return cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    def set_image(self, image):
        self.image = image

    def get_width_height(self, image):
        height, width = image.shape[:2]
        return [width, height]
    #@profile
    def get_edged(self, G):
        gray = self.gray_image(self.image)
        blur = self.get_blurred(gray, G)
        th = cv2.adaptiveThreshold(blur, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY_INV,11,2)

        return cv2.dilate(th, np.ones((3,3),np.uint8), iterations = 1)

    #@profile
    def get_contour(self, G):
        edged = self.get_edged(G)
        __, contours, hierarchy = cv2.findContours(edged, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
        approx = 0
        first = False
        no_contour = True
        last_cnt = 0
        for cnt in contours:
            epsilon = 0.05 * cv2.arcLength(cnt, True)
            new_approx = cv2.approxPolyDP(cnt, epsilon, True)
            if first == False:
                if self.check_points(new_approx):
                    last_cnt = cnt
                    approx = cv2.approxPolyDP(cnt, epsilon, True)
                    first = True
                    no_contour = False
            elif (cv2.contourArea(last_cnt) < cv2.contourArea(cnt)):
                if self.check_points(new_approx):
                    last_cnt = cnt
                    approx = new_approx
                    no_contour = False
                    
        if first == False:
            return -1
        else:
            return approx
        
    def order_contour(self, points):
        ordered_points = np.zeros((4, 2), dtype = "float32")
        #sum of point to detect max and minimum sums
        #maximum sum is the right bottom corner and minimum left top corner
        #points are arranged starting from top left to clock wise indexing
        sum_point = points.sum(axis = 2)
        
        ordered_points[0] = points[np.argmin(sum_point)].flatten()
        ordered_points[2] = points[np.argmax(sum_point)].flatten()
        
        points = np.delete(points, np.argmin(sum_point), 0)
        points = np.delete(points, np.argmax(sum_point) - 1, 0)
        if points[0][0][0] > points[1][0][0]:
            ordered_points[1] = points[0][0].copy()
            ordered_points[3] = points[1][0].copy()
        else:
            ordered_points[1] = points[1][0].copy()
            ordered_points[3] = points[0][0].copy()

        # new_image = self.image.copy()
        # cv2.circle(new_image,tuple(ordered_points[0]),5,[0,255,0],-1)
        # cv2.circle(new_image,tuple(ordered_points[1]),5,[0,255,0],-1)
        # cv2.circle(new_image,tuple(ordered_points[2]),5,[0,255,0],-1)
        # cv2.circle(new_image,tuple(ordered_points[3]),5,[0,255,0],-1)
        # cv2.imwrite("ordere_points.jpg", new_image)
        return ordered_points

    def check_points(self, points):
        '''Checking there is four points to make a rectangle shape or not'''
        if len(points) == 4:
            return True 
        else:
            return False

    def distance_calculator(self, p1, p2):
        '''Calculates distance between 2 points'''
        return math.sqrt((p1[0] - p2[0]) ** 2 + (p1[1] - p2[1]) ** 2)

    def get_perspective(self, points, counter):
        if len(points) != 1:
            self.width, self.height = self.get_width_height(self.image)
            ordered_points = self.order_contour(points)
            
            width_perspective = int(max(self.distance_calculator(ordered_points[0], ordered_points[1]), \
                                        self.distance_calculator(ordered_points[2], ordered_points[3])))

            height_perspective = int(max(self.distance_calculator(ordered_points[0], ordered_points[3]), \
                                         self.distance_calculator(ordered_points[1], ordered_points[2])))

            img_size = np.array([[0, 0], [width_perspective - 1, 0], [width_perspective - 1, height_perspective -1], \
                [0, height_perspective - 1]], dtype = "float32")
            if width_perspective < (self.width / 4) or height_perspective < (self.height / 4):
                return 20
            #3x3 blur mask
            warped_image = cv2.warpPerspective(self.gray_image(self.image), \
                                               cv2.getPerspectiveTransform(ordered_points, img_size), \
                                               (width_perspective, height_perspective))
            if width_perspective > height_perspective:     
                warped_image = cv2.resize(warped_image, (500, 300), cv2.INTER_LINEAR)
            elif height_perspective > width_perspective:
                warped_image = cv2.resize(warped_image, (300, 500), cv2.INTER_LINEAR)            
            self.warped = self.get_blurred(warped_image, 3)
            #cv2.imwrite("warped_images/warped" + str(counter) + ".jpg",warped_image)
            return 30

        else:
            return 10


    def get_scaled(self):
        '''Scales image short edge to L value '''
        self.width, self.height = self.get_width_height(self.warped)
        new_width = 0
        new_height = 0
        if self.height > self.width:
            new_height = int(np.floor(float(self.height) * (self.L / float(self.width))))
            new_width = self.L
        elif self.height < self.width:
            new_width = int(np.floor(float(self.width) * (self.L / float(self.height))))
            new_height = self.L
        elif self.height == self.width:
            new_width = self.L
            new_height = self.L
        self.resized_image = cv2.resize(self.warped, (new_width, new_height), \
        interpolation = cv2.INTER_LINEAR)
        
    def get_cropped(self):
        '''Cropping image middle part L x L'''
        self.get_scaled()
        [self.width, self.height] = self.get_width_height(self.resized_image)
        if self.width != self.height:
            if self.width > self.height:
                if self.width % 2 == 0:
                    crop_width = self.width / 2 - 1
                    return self.resized_image[:, crop_width - self.L / 2:crop_width + self.L / 2]
                else:
                    crop_width = self.width / 2 - 1
                    return self.resized_image[:, crop_width - (self.L/ 2 - 1):crop_width + (self.L/ 2 + 1)]
            else:
                if self.height % 2 == 0:
                    crop_height = self.height / 2 - 1
                    return self.resized_image[crop_height - self.L / 2:crop_height + self.L / 2, :]
                else:
                    crop_height = self.height / 2 - 1
                    return self.resized_image[crop_height - (self.L/ 2 - 1):crop_height + (self.L/ 2 + 1), :]



    def get_blurred(self, image, G):
        '''Blurring cropped image'''
        return cv2.GaussianBlur(image, (G, G), 0, 0)

##    def get_blurred(self, image, G):
##        kernel = np.ones((G, G), np.float32) / (G * G)
##        return cv2.filter2D(image, -1, kernel)


# cv2.imwrite("output/" + img_name[0:-4] + '_scaled.jpg', image2)
# cv2.imwrite("output/" + img_name[0:-4] + '_cropped.jpg', image3)
# cv2.imwrite("output/" + img_name[0:-4] + '_blurred.jpg', image4)
# cv2.imwrite("output/" + img_name[0:-4] + '_edged.jpg', image5)
# cv2.imwrite("output/" + img_name[0:-4] + '_warped.jpg', warped)

# cv2.imwrite("output/" + img_name[0:-4] + '_lines.jpg', image6)
# cv2.imwrite("output/" + img_name[0:-4] + '_intersection_normal.jpg', intersection_normal)
# cv2.imwrite("output/" + img_name[0:-4] + '_intersection_smooth.jpg', intersection_smooth)
# cv2.imwrite("output/" + img_name[0:-4] + '_warped.jpg', warped)
