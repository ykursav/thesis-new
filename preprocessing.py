import math
import cv2
import numpy as np

# import time
cv2.setUseOptimized(True)

SCALED_IMAGE = [128, 128]

class PreProcessing:
    def __init__(self, image, L, hist_eq):
        height, width = image.shape[:2]

        image = cv2.resize(image, (int(width * (400.0 / height)), 400), cv2.INTER_LINEAR)

        # cv2.imshow("res",image)
        # cv2.waitKey(0)
        # cv2.destroyAllWindows()
        # start_time = time.time()
        self.image = image
        self.L = L
        self.hist_eq = hist_eq
        self.width = 0
        self.height = 0
        self.cropped_image = np.array([])
        self.resized_image = np.array([])
        self.warped = np.array([])
        self.contours = self.image.copy()
        self.threshold = 0
        # end_time = time.time()

        # print end_time - start_time

    # def get_image(self):
    #     '''This function is collecting image from picamera and
    #     keep this image as a opencv image'''
    #     #http://picamera.readthedocs.org/en/latest/recipes1.html#capturing-to-a-file
    #     #Section 4.4 is used to get image from camera to keep in stream and set to image
    #     #Unfinished function it will improve in future
    #     #There is a problem with camera warmup time because it will directly
    #     #connected with sync of the sound
    #     #in future version no need to return something it can be used as a internal method
    #     '''
    #     These lines for rpi
    #     '''
    #     # stream = io.bytesio()
    #     # with picamera.picamera() as camera:
    #     #     camera.resolution = (640, 480)
    #     #     camera.capture(stream, format = 'jpeg')
    #     #
    #     # data = np.fromstring(stream.getvalue(), dtype = np.uint8)
    #     # self.image = cv2.imdecode(data, 0)
    #     self.img_name = raw_input("Please enter image name which will process for feature extraction: ")
    #     self.img_name += ".jpg"
    #     try:
    #         self.image = cv2.imread(self.img_name,0)
    #         return self.image
    #     except:
    #         print "ERROR: This image is not exist or unknown format."

    # def get_image_name(self):
    #     return self.img_name 

    def gray_image(self, image):
        image_gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        return image_gray

    def get_width_height(self, image):
        height, width = image.shape[:2]
        return [width, height]

    def get_edged(self, G):
        gray = self.gray_image(self.image)
        blur = self.get_blurred(gray, G)
        th = cv2.adaptiveThreshold(blur, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY_INV,11,2)
        # ret ,th2 = cv2.threshold(blur,0,255,cv2.THRESH_BINARY+cv2.THRESH_OTSU)
        # edge =  cv2.Canny(th, ret * 0.5, ret)
        # cv2.imwrite("Adaptive.jpg", th)
        return th

    def get_contour(self, G):
        edged = self.get_edged(G)
        __, contours, hierarchy = cv2.findContours(edged, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
        approx = 0
        first = False
        approx_cnt = cv2.drawContours(self.contours, contours, -1, (0, 255, 0), -1)
        for cnt in contours:
            epsilon = 0.01 * cv2.arcLength(cnt, True)
            new_approx = cv2.approxPolyDP(cnt, epsilon, True)
            if first == False:
                approx = cv2.approxPolyDP(cnt, epsilon, True)
                first = True
            elif cv2.contourArea(approx) < cv2.contourArea(new_approx):
                approx = new_approx
        new_image = self.image
        
        # approx_cnt = cv2.drawContours(self.contours, [approx], -1, (0, 255, 0), -1)
   
        # x1 = tuple(approx[0][0])
        # x2 = tuple(approx[1][0])
        # x3 = tuple(approx[2][0])
        # x4 = tuple(approx[3][0])
        # cv2.circle(new_image,x1,5,[0,255,0],-1)
        # cv2.circle(new_image,x2,5,[0,255,0],-1)
        # cv2.circle(new_image,x3,5,[0,255,0],-1)
        # cv2.circle(new_image,x4,5,[0,255,0],-1)
        # cv2.imwrite("output_image.jpg", approx_cnt)
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

    def get_perspective(self, points):
        if self.check_points(points):

            ordered_points = self.order_contour(points)
            width_top = self.distance_calculator(ordered_points[0], ordered_points[1])
            width_bottom = self.distance_calculator(ordered_points[2], ordered_points[3])
            
            width_perspective = int(max(width_top, width_bottom))
            
            height_left = self.distance_calculator(ordered_points[0], ordered_points[3])
            height_right = self.distance_calculator(ordered_points[1], ordered_points[2])

            height_perspective = int(max(height_left, height_right))

            img_size = np.array([[0, 0], [width_perspective - 1, 0], [width_perspective - 1, height_perspective -1], \
                [0, height_perspective - 1]], dtype = "float32")

            #3x3 blur mask
            
            gray = self.gray_image(self.image)
            M = cv2.getPerspectiveTransform(ordered_points, img_size)
            warped_image = cv2.warpPerspective(gray, M, (width_perspective, height_perspective))
            blurred = self.get_blurred(warped_image, 3)
            self.warped = blurred
            cv2.imwrite("warped.jpg",warped_image)
            return True


        else:
            return False


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
        return self.resized_image

    def get_scaled_main(self, image, L):
        '''Scales image short edge to L value '''
        self.width, self.height = self.get_width_height(image)
        new_width = 0
        new_height = 0
        if self.height > self.width:
            new_height = int(np.floor(float(self.height) * (L / float(self.width))))
            new_width = L
        elif self.height < self.width:
            new_width = int(np.floor(float(self.width) * (L / float(self.height))))
            new_height = L
        elif self.height == self.width:
            new_width = L
            new_height = L
        self.resized_image = cv2.resize(image, (new_width, new_height), \
        interpolation = cv2.INTER_LINEAR)
        return self.resized_image

    def get_cropped(self):
        '''Cropping image middle part L x L'''
        [self.width, self.height] = self.get_width_height(self.resized_image)
        if self.width != self.height:
            if self.width > self.height:
                if self.width % 2 == 0:
                    crop_width = self.width / 2 - 1
                    self.cropped_image = self.resized_image[:, crop_width - self.L / 2:crop_width + self.L / 2]
                else:
                    crop_width = self.width / 2 - 1
                    self.cropped_image = self.resized_image[:, crop_width - (self.L/ 2 - 1):crop_width + (self.L/ 2 + 1)]
            else:
                if self.height % 2 == 0:
                    crop_height = self.height / 2 - 1
                    self.cropped_image = self.resized_image[crop_height - self.L / 2:crop_height + self.L / 2, :]
                else:
                    crop_height = self.height / 2 - 1
                    self.cropped_image = self.resized_image[crop_height - (self.L/ 2 - 1):crop_height + (self.L/ 2 + 1), :]

        return self.cropped_image


    def get_blurred(self, image, G):
        '''Blurring cropped image'''
        image = cv2.GaussianBlur(image, (G, G), 0, 0)
        return image

    # #(optional area)
    # def get_hist_eq(self):
    #   '''Histogram equalization for cropped image'''
    #   self.hist_eq = cv2.equalizeHist(self.cropped_image)
    #   return self.hist_eq

        # def get_distance(self, pt1, pt2):
    #     return math.sqrt((pt2[0] - pt1[0]) ** 2 + (pt2[1] - pt1[1]) ** 2)

    # def get_hough_lines(self, image):
    #     '''This function is for finding hough lines properly and extending them for visualization purposes'''
    #     height, width = image.shape[:2]
    #     image = cv2.resize(image, (int(width * (500.0 / height)), 500), cv2.INTER_LINEAR)
    #     edged = self.get_edged(image, 5)
    #     lines = cv2.HoughLinesP(edged, 1, np.pi/180, int(self.threshold * 0.5) , 50, 20)
    #     width_resized = int(width * (500.0 / height))
    #     height_resized = 500
    #     extended_lines = []
    #     counter = 0
    #     for line in lines:
    #         #v is a vector storing one line information
    #         # v = line[0] 
    #         # m = 0
    #         # if (v[0] - v[2]) != 0:
    #         #     m = (float(v[1]) - float(v[3])) / (float(v[0]) - float(v[2]))
    #         #     b = v[1] - v[0] * m
    #         #     v[0] = 0
    #         #     v[1] = b
    #         #     v[2] = width_resized
    #         #     v[3] = width_resized * m + b
    #         #     if v[3] > height_resized or v[3] < 0:
    #         #         v[2] = height_resized * m + b
    #         #         v[3] = height_resized
    #         #     cv2.line(image,(v[0], v[1]), (v[2], v[3]),(0,0,255),2)

    #         # else:
    #         #     v[1] = 0
    #         #     v[3] = height_resized
    #         #     cv2.line(image,(v[0], v[1]), (v[2], v[3]),(0,255,0),2)
    #         # extended_lines.append([])

    #         # for element in v:
    #         #     extended_lines[counter].append(element)

    #         # counter += 1
            
    #         #print m, b
    #         # line_draw = []
    #         # line[0][0] = 0
    #         # line[0][1] = float(((v[1] - v[3]) / (v[0] - v[2])) * -v[0] + v[1])
    #         # line[0][2] = width_resized
    #         # line[0][3] = float(((v[1] - v[3]) / (v[0] - v[2])) * (width_resized - v[2]) + v[3])
    #         cv2.line(image,(line[0][0], line[0][1]), (line[0][2], line[0][3]),(0,255,0),2)
            
    #     return image, lines

    # def intersection_vis(self, image, intersection_points):
    #     height, width = image.shape[:2]
    #     image = cv2.resize(image, (int(width * (500.0 / height)), 500), cv2.INTER_LINEAR)
    #     for point in intersection_points:
    #         cv2.circle(image, (point[0], point[1]), 5, (255, 0, 0), -1)

    #     return image

    # def get_intersection(self, image, line1, line2):
    #     height, width = image.shape[:2]
    #     x1 = line1[0][0]; y1 = line1[0][1]; x2 = line1[0][2]; y2 = line1[0][3]
    #     x3 = line2[0][0]; y3 = line2[0][1]; x4 = line2[0][2]; y4 = line2[0][3]
    #     intersection_point = []

    #     d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4)
    #     if d != 0:
    #         px = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / d
    #         py = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / d
    #         if (px < 500 or px < width * (500.0 / height)) and (py < 500 or py < width * (500.0 / height)):
    #             intersection_point.append(px)
    #             intersection_point.append(py)
    #         else:
    #             intersection_point = -1
    #             return intersection_point
    #     else:
    #         intersection_point = -1

    #     return intersection_point

    # def same_intersections(self, intersection_points):

    #     for i in range(0, len(intersection_points)):
    #         for j in range(i + 1, len(intersection_points)):
    #             if intersection_points[i] == intersection_points[j]:
    #                 intersection_points.pop(j)
    #                 return self.same_intersections(intersection_points)

    #     return intersection_points

    # def smooth_intersections(self, intersection_points):
    #     '''This function makes closer intersection values approximation, it
    #     is preprocessing for eliminating multiple intersection points for better results'''
    #     checker = 0
    #     remove = []
    #     for i in range(0, len(intersection_points)):
    #         counter = 1
    #         for j in range(i + 1, len(intersection_points)):
    #             if (intersection_points[i][0] + 15) > intersection_points[j][0] and (intersection_points[i][0] - 15) < intersection_points[j][0] \
    #                 and (intersection_points[i][1] + 15) > intersection_points[j][1] and (intersection_points[i][1] - 15) < intersection_points[j][1]:
    #                 intersection_points[i][0] += intersection_points[j][0]
    #                 intersection_points[i][1] += intersection_points[j][1]
    #                 remove.append(intersection_points[j])
    #                 counter += 1
    #                 checker += 1

    #         if counter != 1:
    #             intersection_points[i][0] = intersection_points[i][0] / counter
    #             intersection_points[i][1] = intersection_points[i][1] / counter
    #             for rm in remove:
    #                 intersection_points.remove(rm)

    #             return self.smooth_intersections(intersection_points)

    #     if checker == 0:
    #         return intersection_points

        


    # def calculate_distances(self, intersection_points):
    #     line_distances = []
    #     for counter in range(0, len(intersection_points)):
    #         for counter2 in range(counter + 1, len(intersection_points)):
    #             line_distances.append([math.floor(self.get_distance(intersection_points[counter], intersection_points[counter2])), \
    #             intersection_points[counter], intersection_points[counter2]])

    #     return line_distances

    # def distance_ratio_detect(self, distances):
    #     correct_lines = []
    #     for counter in range(0, len(distances)):
    #         for counter2 in range(counter + 1, len(distances)):
    #             if int(distances[counter][0]) != 0 and int(distances[counter2][0]) != 0:
    #                 if (distances[counter][0] / distances[counter2][0]) < 1.78 and (distances[counter][0] / distances[counter2][0]) > 1.76:
    #                     correct_lines.append([distances[counter][1], distances[counter][2], \
    #                         distances[counter2][1], distances[counter2][2]])
    #                 elif (distances[counter][0] / distances[counter2][0]) < 0.57 and (distances[counter][0] / distances[counter2][0]) > 0.55:
    #                     correct_lines.append([distances[counter][1], distances[counter][2], \
    #                         distances[counter2][1], distances[counter2][2]])

    #     return correct_lines


    # def order_points(self, points):
    #     rect = np.zeros((4, 2), dtype = "float32")
     
    #     s = points.sum(axis = 1)
    #     rect[0] = points[np.argmin(s)]
    #     rect[2] = points[np.argmax(s)]
     
    #     diff = np.diff(points, axis = 1)
    #     rect[1] = points[np.argmin(diff)]
    #     rect[3] = points[np.argmax(diff)]
     
    #     return rect

    # def get_perspective(self, image, points):
        # height, width = image.shape[:2]
        # image = cv2.resize(image, (int(width * (500.0 / height)), 500), cv2.INTER_LINEAR)
        # epsilon = 0.1*cv2.arcLength(points, True)
        # approx = cv2.approxPolyDP(points, epsilon, True)
        # awidth = points[0][0]
        # aheight = points[0][1]
        # dst = np.array([
        # [0, 0],
        # [awidth - 1, 0],
        # [awidth - 1, aheight - 1],
        # [0, aheight - 1]], dtype = "float32")
        # rect = self.order_points(points)
        # M = cv2.getPerspectiveTransform(rect, dst)
        # warped = cv2.warpPerspective(image, M, (awidth, aheight))
        # return warped


            # def get_blurred(self, image, G):
    #     '''Blurring cropped image'''
    #     image = cv2.GaussianBlur(image, (G, G), 0)
    #     return image

    # def get_edges(self, image, G):
    #     screenCnt = 0
    #     height, width = image.shape[:2]
    #     image = cv2.resize(image, (int(width * (500.0 / height)), 500), cv2.INTER_LINEAR)
    #     gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    #     blur = self.get_blurred(gray, G)
        
    #     __, cnts, hierarchy = cv2.findContours(edge.copy(), cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
    #     cv2.namedWindow('image')
    #     def nothing(x):
    #         pass
    #     cnts = sorted(cnts, key = cv2.contourArea, reverse = True)
    #     cv2.createTrackbar('cnts','image',0, len(cnts) - 1,nothing)
    #     # lines = cv2.HoughLines(edge,1,np.pi/180,int(th))
    #     # print lines
    #     # for line in lines:
    #     #     for rho, theta in line:
    #     #         a = np.cos(theta)
    #     #         b = np.sin(theta)
    #     #         x0 = a*rho
    #     #         y0 = b*rho
    #     #         x1 = int(x0 + 1000*(-b))
    #     #         y1 = int(y0 + 1000*(a))
    #     #         x2 = int(x0 - 1000*(-b))
    #     #         y2 = int(y0 - 1000*(a))

    #     #         cv2.line(image,(x1,y1),(x2,y2),(0,0,255),2)
    #     while(1):
    #         cv2.imshow('image', image)
    #         epsilon = 0.05 * cv2.arcLength(cnts[cv2.getTrackbarPos('cnts','image')],True)
    #         approx = cv2.approxPolyDP(cnts[cv2.getTrackbarPos('cnts','image')], epsilon, True)
    #         #x,y,w,h = cv2.boundingRect(cnts[cv2.getTrackbarPos('cnts','image')])
    #         #cv2.rectangle(image,(x,y),(x+w,y+h),(0,255,0),2)
    #         k = cv2.waitKey(1) & 0xFF
    #         if k == 27:
    #             break
    #         cv2.drawContours(image, cnts[cv2.getTrackbarPos('cnts','image')], -1, (0, 255, 0), 2)

    #     cv2.destroyAllWindows()

    #     return edge


# intersection_points = []

# image6, lines = yunus.get_hough_lines(image)

# for i in range(0, len(lines)):
#     for j in range(i + 1, len(lines)):
#             intersection_point = yunus.get_intersection(image, lines[i], lines[j])
#             if intersection_point != -1:
#                 intersection_points.append(intersection_point)


# intersection_points = yunus.same_intersections(intersection_points)


# intersection_normal = yunus.intersection_vis(image, intersection_points)

# smooth_points = yunus.smooth_intersections(intersection_points)

# intersection_smooth = yunus.intersection_vis(image, smooth_points)

# distances = yunus.calculate_distances(smooth_points)

# points = yunus.distance_ratio_detect(distances)


# points_new = []


# for point in points:
#     for p in point:
#         points_new.append(p)
# points_new = yunus.same_intersections(points_new)
# points_new = np.asarray(points_new, dtype = "float32")

# warped = yunus.get_perspective(image, points_new)



#image5= yunus.get_hist_eq()

#image6 = yunus.get_blocks()
# cv2.imwrite("output/" + img_name[0:-4] + '_scaled.jpg', image2)
# cv2.imwrite("output/" + img_name[0:-4] + '_cropped.jpg', image3)
# cv2.imwrite("output/" + img_name[0:-4] + '_blurred.jpg', image4)
# cv2.imwrite("output/" + img_name[0:-4] + '_edged.jpg', image5)
# cv2.imwrite("output/" + img_name[0:-4] + '_warped.jpg', warped)

# cv2.imwrite("output/" + img_name[0:-4] + '_lines.jpg', image6)
# cv2.imwrite("output/" + img_name[0:-4] + '_intersection_normal.jpg', intersection_normal)
# cv2.imwrite("output/" + img_name[0:-4] + '_intersection_smooth.jpg', intersection_smooth)
# cv2.imwrite("output/" + img_name[0:-4] + '_warped.jpg', warped)