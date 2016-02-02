import numpy as np
import math
import cv2


SCALED_IMAGE = [128, 128]

class PreProcessing:
    def __init__(self, image, L, hist_eq):
        self.image = image
        self.L = L
        self.hist_eq = hist_eq
        self.width = 0
        self.height = 0
        self.cropped_image = np.array([])
        self.resized_image = np.array([])
        self.threshold = 0
        self.smooth = 5

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
        height = len(image)
        width = len(image[0,:])
        return [width, height]

    def get_edged(self, image, G):
        height, width = image.shape[:2]
        image = cv2.resize(image, (int(width * (500.0 / height)), 500), cv2.INTER_LINEAR)
        gray = self.gray_image(image)
        blur = self.get_blurred(gray, G)
        th, ret = cv2.threshold(blur, 0, 255, cv2.THRESH_OTSU)
        edge =  cv2.Canny(blur, th * 0.5, th)
        self.threshold = th
        return edge

    def get_distance(self, pt1, pt2):
        return math.sqrt((pt2[0] - pt1[0]) ** 2 + (pt2[1] - pt1[1]) ** 2)

    def get_hough_lines(self, image):
        '''This function is for finding hough lines properly and extending them for visualization purposes'''
        height, width = image.shape[:2]
        image = cv2.resize(image, (int(width * (500.0 / height)), 500), cv2.INTER_LINEAR)
        edged = self.get_edged(image, 5)
        lines = cv2.HoughLinesP(edged, 1, np.pi/180, int(self.threshold * 0.5) , 1000, self.threshold * 0.5)
        width_resized = int(width * (500.0 / height))
        height_resized = 500
        extended_lines = []
        counter = 0
        for line in lines:
            #v is a vector storing one line information
            # v = line[0] 
            # m = 0
            # if (v[0] - v[2]) != 0:
            #     m = (float(v[1]) - float(v[3])) / (float(v[0]) - float(v[2]))
            #     b = v[1] - v[0] * m
            #     v[0] = 0
            #     v[1] = b
            #     v[2] = width_resized
            #     v[3] = width_resized * m + b
            #     if v[3] > height_resized or v[3] < 0:
            #         v[2] = height_resized * m + b
            #         v[3] = height_resized
            #     cv2.line(image,(v[0], v[1]), (v[2], v[3]),(0,0,255),2)

            # else:
            #     v[1] = 0
            #     v[3] = height_resized
            #     cv2.line(image,(v[0], v[1]), (v[2], v[3]),(0,255,0),2)
            # extended_lines.append([])

            # for element in v:
            #     extended_lines[counter].append(element)

            # counter += 1
            
            #print m, b
            # line_draw = []
            # line[0][0] = 0
            # line[0][1] = float(((v[1] - v[3]) / (v[0] - v[2])) * -v[0] + v[1])
            # line[0][2] = width_resized
            # line[0][3] = float(((v[1] - v[3]) / (v[0] - v[2])) * (width_resized - v[2]) + v[3])
            cv2.line(image,(line[0][0], line[0][1]), (line[0][2], line[0][3]),(0,255,0),2)
            
        return image, lines

    def intersection_vis(self, image, intersection_points):
        height, width = image.shape[:2]
        image = cv2.resize(image, (int(width * (500.0 / height)), 500), cv2.INTER_LINEAR)
        for point in intersection_points:
            cv2.circle(image, (point[0], point[1]), 5, (255, 0, 0), -1)

        return image

    def get_intersection(self, image, line1, line2):

        x1 = line1[0][0]; y1 = line1[0][1]; x2 = line1[0][2]; y2 = line1[0][3]
        x3 = line2[0][0]; y3 = line2[0][1]; x4 = line2[0][2]; y4 = line2[0][3]
        intersection_point = []

        d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4)
        if d != 0:
            px = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / d
            py = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / d
            intersection_point.append(px)
            intersection_point.append(py)
            
        else:
            intersection_point = [0, 0]

        return intersection_point

    def same_intersections(self, intersection_points):

        for i in range(0, len(intersection_points)):
            for j in range(i + 1, len(intersection_points)):
                if intersection_points[i] == intersection_points[j]:
                    intersection_points.pop(j)
                    return self.same_intersections(intersection_points)

        return intersection_points

    def smooth_intersections(self, intersection_points):
        '''This function makes closer intersection values approximation, it
        is preprocessing for eliminating multiple intersection points for better results'''
        checker = 0
        remove = []
        for i in range(0, len(intersection_points)):
            counter = 1
            for j in range(i + 1, len(intersection_points)):
                if (intersection_points[i][0] + 15) > intersection_points[j][0] and (intersection_points[i][0] - 15) < intersection_points[j][0] \
                    and (intersection_points[i][1] + 15) > intersection_points[j][1] and (intersection_points[i][1] - 15) < intersection_points[j][1]:
                    intersection_points[i][0] += intersection_points[j][0]
                    intersection_points[i][1] += intersection_points[j][1]
                    remove.append(intersection_points[j])
                    counter += 1
                    checker += 1

            if counter != 1:
                intersection_points[i][0] = intersection_points[i][0] / counter
                intersection_points[i][1] = intersection_points[i][1] / counter
                for rm in remove:
                    intersection_points.remove(rm)

                return self.smooth_intersections(intersection_points)

        if checker == 0:
            return intersection_points

        


    def calculate_distances(self, intersection_points):
        line_distances = []
        for counter in range(0, len(intersection_points)):
            for counter2 in range(counter + 1, len(intersection_points)):
                line_distances.append([math.floor(self.get_distance(intersection_points[counter], intersection_points[counter2])), \
                intersection_points[counter], intersection_points[counter2]])

        return line_distances

    def distance_ratio_detect(self, distances):
        correct_lines = []
        for counter in range(0, len(distances)):
            for counter2 in range(counter + 1, len(distances)):
                if int(distances[counter][0]) != 0 and int(distances[counter2][0]) != 0:
                    if (distances[counter][0] / distances[counter2][0]) < 1.78 and (distances[counter][0] / distances[counter2][0]) > 1.76:
                        correct_lines.append([distances[counter][0], distances[counter2][0], distances[counter][1], distances[counter][2], \
                            distances[counter2][1], distances[counter2][2]])
                    elif (distances[counter][0] / distances[counter2][0]) < 0.57 and (distances[counter][0] / distances[counter2][0]) > 0.55:
                        correct_lines.append([distances[counter][0], distances[counter2][0], distances[counter][1], distances[counter][2], \
                            distances[counter2][1], distances[counter2][2]])

    def get_perspective(self, image):
        pass

    def get_scaled(self):
        '''Scales image short edge to L value '''
        [self.width, self.height] = self.get_width_height(self.image)
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
        self.resized_image = cv2.resize(self.image, (new_width, new_height), \
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
        image = cv2.GaussianBlur(image, (G, G), 0)
        return image

    # #(optional area)
    # def get_hist_eq(self):
    #   '''Histogram equalization for cropped image'''
    #   self.hist_eq = cv2.equalizeHist(self.cropped_image)
    #   return self.hist_eq

img_name = raw_input("Please enter image name which will process for feature extraction: ")
img_name += ".jpg"
image = 0
try:
    image = cv2.imread(img_name, 1)
except:
    print "ERROR: This image is not exist or unknown format."
intersection_points = []
yunus = PreProcessing(image, 128, False)
image6, lines = yunus.get_hough_lines(image)

for i in range(0, len(lines)):
    for j in range(i + 1, len(lines)):
            intersection_point = yunus.get_intersection(image, lines[i], lines[j])
            intersection_points.append(intersection_point)

intersection_points = yunus.same_intersections(intersection_points)

intersection_normal = yunus.intersection_vis(image, intersection_points)

smooth_points = yunus.smooth_intersections(intersection_points)

intersection_smooth = yunus.intersection_vis(image, smooth_points)

distances = yunus.calculate_distances(intersection_points)

yunus.distance_ratio_detect(distances)

image2 = yunus.get_scaled()
image3 = yunus.get_cropped()
image4 = yunus.get_blurred(image, 3)
image5 = yunus.get_edged(image, 5)

#image5= yunus.get_hist_eq()

#image6 = yunus.get_blocks()
cv2.imwrite("output/" + img_name[0:-4] + '_scaled.jpg', image2)
cv2.imwrite("output/" + img_name[0:-4] + '_cropped.jpg', image3)
cv2.imwrite("output/" + img_name[0:-4] + '_blurred.jpg', image4)
cv2.imwrite("output/" + img_name[0:-4] + '_edged.jpg', image5)

cv2.imwrite("output/" + img_name[0:-4] + '_lines.jpg', image6)
cv2.imwrite("output/" + img_name[0:-4] + '_intersection_normal.jpg', intersection_normal)
cv2.imwrite("output/" + img_name[0:-4] + '_intersection_smooth.jpg', intersection_smooth)