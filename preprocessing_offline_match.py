# -*- coding: utf-8 -*-
from math import sqrt
from cv2 import cvtColor, adaptiveThreshold, dilate, findContours, arcLength \
     , approxPolyDP, contourArea, warpPerspective, getPerspectiveTransform, resize, \
     INTER_LINEAR, GaussianBlur, COLOR_BGR2GRAY, COLOR_GRAY2BGR, ADAPTIVE_THRESH_GAUSSIAN_C, \
     THRESH_BINARY_INV, RETR_LIST, CHAIN_APPROX_SIMPLE, imwrite, Canny, INTER_NEAREST, \
     setUseOptimized, threshold, THRESH_BINARY, THRESH_OTSU, VideoWriter, ADAPTIVE_THRESH_MEAN_C, \
     CV_64F, erode
     
from numpy import array, ones, uint8, zeros, argmin, argmax, delete, floor, median, ndarray
import gc
import ctypes
from threading import Thread


# import time
SCALED_IMAGE = [128, 128]
image = array([])
resized_image = array([])
warped = array([])
L = 0
#out = 0
#fourcc = VideoWriter_fourcc('X','V','I','D')
#out = VideoWriter("ADAPTIVE_THRESHOLD_TESTS/threshold_test_02.avi", fourcc, 20.0, (544, 400))

def set_initials_pre(L_f, image_f):
    global L, image
    L = L_f
    image = image_f
# class PreProcessing:
#     def __init__(self, L, hist_eq):
#         self.image = array([])
#         self.L = L
#         self.hist_eq = hist_eq
#         self.width = 0
#         self.height = 0
#         self.resized_image = array([])
#         self.warped = array([])
#@profile
def gray_image(image):
    return cvtColor(image, COLOR_BGR2GRAY)

    # def set_image(self, image):
    #     self.image = image
#@profile
def get_width_height(image):
    height, width = image.shape[:2]
    return [width, height]


def write_out(stream, frame):
    global out, out2
    stream.write(cvtColor(frame, COLOR_GRAY2BGR))
0

#@profile
def get_scaled():
    global resized_image
    '''Scales image short edge to L value '''
    gray = image
    width, height = get_width_height(gray)
    new_width = 0
    new_height = 0
    if height > width:
        new_height = int(floor(float(height) * (L / float(width))))
        new_width = L
    elif height < width:
        new_width = int(floor(float(width) * (L / float(height))))
        new_height = L
    elif height == width:
        new_width = L
        new_height = L
    resized_image = resize(gray, (new_width, new_height), \
    interpolation = INTER_NEAREST)

#@profile    
def get_cropped():
    '''Cropping image middle part L x L'''
    global out2
    get_scaled()
    [width, height] = get_width_height(resized_image)
    if width != height:
        if width > height:
            if width % 2 == 0:
                crop_width = width / 2 - 1
                res = get_blurred(resized_image[:, crop_width - L / 2:crop_width + L / 2], 3)
                Thread(target = write_out, args = (out2, res,)).start()
                return res
            else:
                crop_width = width / 2 - 1
                res = get_blurred(resized_image[:, crop_width - (L/ 2 - 1):crop_width + (L/ 2 + 1)], 3)
                Thread(target = write_out, args = (out2, res,)).start()
                return res
        else:
            if height % 2 == 0:
                crop_height = height / 2 - 1
                res = get_blurred(resized_image[crop_height - L / 2:crop_height + L / 2, :], 3)
                Thread(target = write_out, args = (out2, res,)).start()
                return res
            else:
                crop_height = height / 2 - 1
                res = get_blurred(resized_image[crop_height - (L/ 2 - 1):crop_height + (L/ 2 + 1), :], 3)
                Thread(target = write_out, args = (out2, res,)).start()
                return res

#@profile
def get_blurred(image, G):
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
