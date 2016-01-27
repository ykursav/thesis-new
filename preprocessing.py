import numpy as np
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
        return edge

    def get_hough_lines(self, image):
        height, width = image.shape[:2]
        image = cv2.resize(image, (int(width * (500.0 / height)), 500), cv2.INTER_LINEAR)
        lines = cv2.HoughLinesP(self.get_edged(image, 5), 1, np.pi/180, 70, 30, 10)
        width_resized = int(width * (500.0 / height))

        for line in lines:
            v = line[0]
            m = 0
            if (v[0] - v[2]) != 0:
                m = (float(v[1]) - float(v[3])) / (float(v[0]) - float(v[2]))
                b = v[1] - v[0] * m
                v[0] = 0
                v[1] = b
                v[2] = width_resized
                v[3] = width_resized * m + b
                if v[3] > 500 or v[3] < 0:
                    v[2] = 500 * m + b
                    v[3] = 500
                cv2.line(image,(v[0], v[1]), (v[2], v[3]),(0,0,255),2)

            else:
                v[1] = 0
                v[3] = 500


            
            #print m, b
            # line_draw = []
            # line[0][0] = 0
            # line[0][1] = float(((v[1] - v[3]) / (v[0] - v[2])) * -v[0] + v[1])
            # line[0][2] = width_resized
            # line[0][3] = float(((v[1] - v[3]) / (v[0] - v[2])) * (width_resized - v[2]) + v[3])
            cv2.line(image,(line[0][0], line[0][1]), (line[0][2], line[0][3]),(0,255,0),2)
            
        return image

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

yunus = PreProcessing(image, 128, False)
image6 = yunus.get_hough_lines(image)
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