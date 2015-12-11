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

    def __get_width_height_(self):
        self.height = len(self.image)
        self.width = len(self.image[0,:])

    def get_image(self):
        '''This function is collecting image from picamera and
        keep this image as a opencv image'''
        #http://picamera.readthedocs.org/en/latest/recipes1.html#capturing-to-a-file
        #Section 4.4 is used to get image from camera to keep in stream and set to image
        #Unfinished function it will improved in future
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
        img_name = input("Please enter image name which will process for feature extraction: ")
        img_name += ".jpg"
        try:
            self.image = cv2.imread(img_name,0)
            return self.image
        except:
            print "ERROR: This image is not exist or unknown format."

    def get_perspective(self):
        pass

    def get_scaled(self):
        #Returns scaled image
        self.__get_width_height_()
        new_width = 0
        new_height = 0
        print self.height
        print self.width
        if self.height > self.width:
            new_height = int(np.floor(float(self.height) * (128.0 / self.width)))
            new_width = 128
        elif self.height < self.width:
            new_width = int(np.floor(float(self.width) * (128.0 / self.height)))
            new_height = 128
        elif self.height == self.width:
            new_width = 128
            new_height = 128

        self.resized_image = cv2.resize(self.image, (new_width, new_height), \
        interpolation = cv2.INTER_LINEAR)
        return self.resized_image




yunus = SignatureExtraction(5, False, False, 3, 5)
image = yunus.get_image()
image2 = yunus.get_scaled()
cv2.imwrite("output/" + 'yunus' + '_captured.jpg',image)
cv2.imwrite("output/" + 'yunus' + '_scaled.jpg',image2)
