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
        self.cropped_blur = np.array([])
        self.image_blocks = np.array([])
        self.number_of_blocks = ((self.L - self.N) / self.M ) + 1
        self.block_all = np.zeros((self.number_of_blocks, self.number_of_blocks, self.N, self.N))
        self.average_luminance = np.zeros((self.number_of_blocks, self.number_of_blocks, 1))
        #irrelevant but used in experimentally or optional it will remove or toggle comment in future
        self.img_name = ""
        #self.hist_eq = np.array([])

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
        '''Scales image short edge to L value '''
        self.get_width_height(self.image)
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

    def get_blurred(self):
        '''Blurring cropped image'''
    	self.cropped_blur = cv2.blur(self.cropped_image,(3,3))
    	return self.cropped_blur
    
    #(optional area)
    # def get_hist_eq(self):
    #     '''Histogram equalization for cropped image'''
    # 	self.hist_eq = cv2.equalizeHist(self.cropped_image)
    #     return self.hist_eq

    #check again it is correct or not
    def __get_average_luminance_of_block(self, block):
        '''luminance calculation block'''
        lum = np.sum(block) / self.N ** 2
        return lum  

    #check again it is correct or not
    # def var_luminance(I_hist): 
    # '''Variance of luminance calculation'''
    # variance = np.sum((I_hist-avg_luminance(I_hist))**2)/N**2
    # return variance 

    def __get_total_energy_block(self, block):
        block = block.flatten()
        total_energy = 0
        for element in block:
            total_energy += element ** 2

        return total_energy

    

    def get_blocks(self):
        '''Dividing cropped image N x N blocks by M overlapping'''
        I_vis_blur_y = np.zeros((self.number_of_blocks * self.N, self.number_of_blocks * self.N))
        I_vis_blur_x = np.zeros((self.L, self.number_of_blocks * self.N))
        for x in range(0, self.L - self.M, self.M):
            I_vis_blur_x[:, x * 2:x * 2 + self.N] = self.cropped_blur[:, x:x + self.N]

        for y in range(0, self.L - self.M, self.M):
            I_vis_blur_y[y * 2:y * 2 + self.N, :] = I_vis_blur_x[y:y + self.N, :]

        #block numbering
        for x in range(0, self.number_of_blocks):
            for y in range(0, self.number_of_blocks):
                self.block_all[x, y, :] = I_vis_blur_y[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
                self.average_luminance[x, y, :] =  self.get_average_luminance_of_block(I_vis_blur_y[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])


        return self.I_vis_blur_y








        


yunus = SignatureExtraction(128, False, False, 8, 4)
image = yunus.get_image()
image2 = yunus.get_scaled()
image3 = yunus.get_cropped()
image4 = yunus.get_blurred()
#image5= yunus.get_hist_eq()
image6 = yunus.get_blocks()
img_name = yunus.get_image_name()
cv2.imwrite("output/" + img_name[0:-4] + '_captured.jpg', image)
cv2.imwrite("output/" + img_name[0:-4] + '_scaled.jpg', image2)
cv2.imwrite("output/" + img_name[0:-4] + '_cropped.jpg', image3)
cv2.imwrite("output/" + img_name[0:-4] + '_blurred.jpg', image4)
#cv2.imwrite("output/" + img_name[0:-4] + '_histogram.jpg', image5)
cv2.imwrite("output/" + img_name[0:-4] + '_xblocks.jpg', image6)