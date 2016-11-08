# -*- coding: utf-8 -*-
from math import sqrt
from cv2 import cvtColor, adaptiveThreshold, dilate, findContours, arcLength \
     , approxPolyDP, contourArea, warpPerspective, getPerspectiveTransform, resize, \
     INTER_LINEAR, GaussianBlur, COLOR_BGR2GRAY, ADAPTIVE_THRESH_GAUSSIAN_C, \
     THRESH_BINARY_INV, RETR_LIST, CHAIN_APPROX_SIMPLE, imwrite, Canny, INTER_NEAREST
     
from numpy import array, ones, uint8, zeros, argmin, argmax, delete, floor, median
import gc
import ctypes

libextraction = ctypes.cdll.LoadLibrary("./C_Libraries/libextraction.so")
libextraction.calSqrt.restype = ctypes.c_double

# import time
SCALED_IMAGE = [128, 128]

class PreProcessing:
    def __init__(self, L, hist_eq):
        self.image = array([])
        self.L = L
        self.hist_eq = hist_eq
        self.width = 0
        self.height = 0
        self.resized_image = array([])
        self.warped = array([])

    def gray_image(self, image):
        return cvtColor(image, COLOR_BGR2GRAY)

    def set_image(self, image):
        self.image = image

    def get_width_height(self, image):
        height, width = image.shape[:2]
        return [width, height]
    #@profile
    def get_edged(self, G):
        gray = self.gray_image(self.image)
        blur = self.get_blurred(gray, G)
        v = median(blur)
        #th = adaptiveThreshold(blur, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV,11,2)
        lower = int(max(0, (1.0 - 0.33) * v))
        upper = int(max(255, (1.0 + 0.33) * v))
        canny = Canny(gray, lower, upper)

        return dilate(canny, ones((5,5), uint8), iterations = 1)

    #@profile
    def get_contour(self, G):
        edged = self.get_edged(G)
        __, contours, hierarchy = findContours(edged, RETR_LIST, CHAIN_APPROX_SIMPLE)
        approx = 0
        first = False
        no_contour = True
        last_cnt = 0
        for cnt in contours:
            epsilon = 0.05 * arcLength(cnt, True)
            new_approx = approxPolyDP(cnt, epsilon, True)
            if first == False:
                if self.check_points(new_approx):
                    last_cnt = cnt
                    approx = approxPolyDP(cnt, epsilon, True)
                    first = True
                    no_contour = False
            elif (contourArea(last_cnt) < contourArea(cnt)):
                if self.check_points(new_approx):
                    last_cnt = cnt
                    approx = new_approx
                    no_contour = False
                    
        if first == False:
            return -1
        else:
            return approx
    #@profile
    def order_contour(self, points):
        ordered_points = zeros((4, 2), dtype = "float32")
        #sum of point to detect max and minimum sums
        #maximum sum is the right bottom corner and minimum left top corner
        #points are arranged starting from top left to clock wise indexing
        sum_point = points.sum(axis = 2)
        
        ordered_points[0] = points[argmin(sum_point)].flatten()
        ordered_points[2] = points[argmax(sum_point)].flatten()

        points = delete(points, argmin(sum_point), 0)
        points = delete(points, argmax(sum_point) - 1, 0)
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
    #@profile
    def distance_calculator(self, p1, p2):
        '''Calculates distance between 2 points'''
##        print libextraction.calSqrt(array(p1[0], p1[1]).ctypes.data_as(ctypes.c_void_p), array(p2[0], p2[1]).ctypes.data_as(ctypes.c_void_p))
##        print p1
        return sqrt((p1[0] - p2[0]) ** 2 + (p1[1] - p2[1]) ** 2)

    #@profile
    def get_perspective(self, points, counter):
        if len(points) != 1: 
            self.width, self.height = self.get_width_height(self.image)
            ordered_points = self.order_contour(points)
            
            width_perspective = int(max(self.distance_calculator(ordered_points[0], ordered_points[1]), \
                                        self.distance_calculator(ordered_points[2], ordered_points[3])))

            height_perspective = int(max(self.distance_calculator(ordered_points[0], ordered_points[3]), \
                                         self.distance_calculator(ordered_points[1], ordered_points[2])))
            
            img_size = array([[0, 0], [width_perspective - 1, 0], [width_perspective - 1, height_perspective -1], \
                [0, height_perspective - 1]], dtype = "float32")
##            if width_perspective < (self.width / 4) or height_perspective < (self.height / 4):
##                return 20
            #3x3 blur mask
            warped_image = warpPerspective(self.gray_image(self.image), \
                                               getPerspectiveTransform(ordered_points, img_size), \
                                               (width_perspective, height_perspective))
            
            if width_perspective > height_perspective:     
                warped_image = resize(warped_image, (500, 300), INTER_NEAREST)
            elif height_perspective > width_perspective:
                warped_image = resize(warped_image, (300, 500), INTER_NEAREST)            
            self.warped = self.get_blurred(warped_image, 3)
            #imwrite("warped_images/warped" + str(counter) + ".jpg", warped_image)

            return 30

        else:
            return 10

    #@profile
    def get_scaled(self):
        '''Scales image short edge to L value '''
        self.width, self.height = self.get_width_height(self.warped)
        new_width = 0
        new_height = 0
        if self.height > self.width:
            new_height = int(floor(float(self.height) * (self.L / float(self.width))))
            new_width = self.L
        elif self.height < self.width:
            new_width = int(floor(float(self.width) * (self.L / float(self.height))))
            new_height = self.L
        elif self.height == self.width:
            new_width = self.L
            new_height = self.L
        self.resized_image = resize(self.warped, (new_width, new_height), \
        interpolation = INTER_NEAREST)
        #imwrite("scaled.jpg", self.resized_image)
    #@profile    
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


    #@profile
    def get_blurred(self, image, G):
        '''Blurring cropped image'''
        return GaussianBlur(image, (G, G), 0, 0)

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
