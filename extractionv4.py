import numpy as np
import cv2
#import picamera
from threading import Timer
import time
import io


SCALED_IMAGE = [128, 128]

# camera settings


class SignatureExtraction:
    def __init__(self, L, blur, hist_eq, N, M):
        self.L = L
        self.blur = blur
        self.hist_eq = hist_eq
        self.N = N
        self.M = M
        self.image = np.array([])
        self.width = 0
        self.height = 0
        self.resized_image = np.array([])
        self.cropped_image = np.array([])
        #unrelevant but used in experimentally it will remove
        self.img_name = ""

    def get_width_height(self, image):
        self.height = len(image)
        self.width = len(image[0,:])

    def get_image(self):
        '''This function is collecting image from picamera and
        keep this image as a opencv image'''
        #http://picamera.readthedocs.org/en/latest/recipes1.html#capturing-to-a-file
        #Section 4.4 is used to get image from camera to keep in stream and set to image
        #Unfinished function it will improve in future
        #There is a problem with camera warmup time because it will directly
        #connected with sync of the sound
        #in future version no need to return something it can be used as a internal method
        '''
        These lines for rpi
        '''
        # stream = io.bytesio()
        # with picamera.picamera() as camera:
        #     camera.resolution = (640, 480)
        #     camera.capture(stream, format = 'jpeg')
        #
        # data = np.fromstring(stream.getvalue(), dtype = np.uint8)
        # self.image = cv2.imdecode(data, 0)
        self.img_name = raw_input("Please enter image name which will process for feature extraction: ")
        self.img_name += ".jpg"
        try:
            self.image = cv2.imread(self.img_name,0)
            return self.image
        except:
            print "ERROR: This image is not exist or unknown format."

    def get_image_name(self):
        return self.img_name

    def get_perspective(self):
        pass

    def get_scaled(self):
        #Returns scaled image
        self.get_width_height(self.image)
        new_width = 0
        new_height = 0
        print self.height
        print self.width
        if self.height > self.width:
            new_height = int(np.floor(float(self.height) * (self.L / float(self.width))))
            new_width = self.L
        elif self.height < self.width:
            new_width = int(np.floor(float(self.width) * (self.L / float(self.height))))
            new_height = self.L
        elif self.height == self.width:
            new_width = self.L
            new_height = self.L
        print new_width
        print new_height
        self.resized_image = cv2.resize(self.image, (new_width, new_height), \
        interpolation = cv2.INTER_LINEAR)
        return self.resized_image

    def get_cropped(self):
       '''Resized image middle cropping 128 x 128'''
       self.get_width_height(self.resized_image)
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


yunus = SignatureExtraction(128, False, False, 3, 5)
image = yunus.get_image()
image2 = yunus.get_scaled()
image3 = yunus.get_cropped()
img_name = yunus.get_image_name()
cv2.imwrite("output/" + img_name[0:-4] + '_captured.jpg', image)
cv2.imwrite("output/" + img_name[0:-4] + '_scaled.jpg', image2)
cv2.imwrite("output/" + img_name[0:-4] + '_cropped.jpg', image3)
