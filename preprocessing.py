# -*- coding: utf-8 -*-
from math import sqrt
from cv2 import cvtColor, adaptiveThreshold, dilate, findContours, arcLength \
     , approxPolyDP, contourArea, warpPerspective, getPerspectiveTransform, resize, \
     INTER_LINEAR, GaussianBlur, COLOR_BGR2GRAY, COLOR_GRAY2BGR, ADAPTIVE_THRESH_GAUSSIAN_C, \
     THRESH_BINARY_INV, RETR_LIST, CHAIN_APPROX_SIMPLE, imwrite, Canny, INTER_NEAREST, \
     setUseOptimized, threshold, THRESH_BINARY, THRESH_OTSU, VideoWriter, ADAPTIVE_THRESH_MEAN_C, \
     CV_64F, erode, drawContours, circle, polylines
     
from numpy import array, ones, uint8, zeros, argmin, argmax, delete, floor, median, ndarray
import gc
import ctypes
from threading import Thread

setUseOptimized(True)
libextraction = ctypes.cdll.LoadLibrary("./C_Libraries/libextraction.so")
libextraction.calSqrt.restype = ctypes.c_double
# import time
SCALED_IMAGE = [128, 128]
image = array([])
resized_image = array([])
warped = array([])
L = 0
counter_warped = 0
#out = 0
out2 = 0
#fourcc = VideoWriter_fourcc('X','V','I','D')
#out = VideoWriter("ADAPTIVE_THRESHOLD_TESTS/threshold_test_02.avi", fourcc, 20.0, (544, 400))

def set_initials_pre(L_f, image_f, counter_warped_f, out2_f):
    global L, image, counter_warped, out2
    L = L_f
    image = image_f
    #imwrite("original_block.jpg", image)
    counter_warped = counter_warped_f
    #out = out_f
    out2 = out2_f
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

#@profile
def get_edged(G):
    global out
    gray = gray_image(image)
    blur = get_blurred(gray, G)
    #v = median(gray)
    #lower = int(max(0, (1.0 - 0.33) * v))
    #upper = int(max(255, (1.0 + 0.33) * v))
    th = adaptiveThreshold(blur, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 11, 1)
    #ret, th = threshold(blur, lower, upper, THRESH_BINARY)
    #ret ,th2 = threshold(blur,0,255,THRESH_BINARY+THRESH_OTSU)
    # cv2.imwrite("Adaptive.jpg", th)
##        cv2.imshow("th", dilation)
##        cv2.waitKey(0)
##        cv2.destroyAllWindows()
    #imwrite("OTSU/otsu" + str(counter_warped) + ".jpg", th)
    #print get_width_height(th)
    #out.write(cvtColor(th, COLOR_GRAY2BGR))
    #dilated = dilate(th, ones((3,3), uint8),iterations = 1)
    #edge = Canny(gray, lower, upper)
    #imwrite("canny.jpg", th)
    #dilated = dilate(edge, ones((3, 3), uint8), iterations = 1)
    #imwrite("dilated.jpg", dilated)
    return th
    #imwrite("adaptive_edges/adaptive"+ str(counter_warped) + ".jpg", th)
    #Thread(target = write_out, args = (out, dilated,)).start()
    #return th
#    return edge

def write_out(stream, frame):
    global out, out2
    stream.write(cvtColor(frame, COLOR_GRAY2BGR))
# #@profile
#def get_edged(G):
#    global out
#    gray = gray_image(image)
#    blur = get_blurred(gray, G)
#    v = median(blur)
#    #th = adaptiveThreshold(blur, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV,11,2)
#    lower = int(max(0, (1.0 - 0.33) * v))
#    upper = int(max(255, (1.0 + 0.33) * v))
#    canny = Canny(blur, lower, upper)
  #  out.write(cvtColor(canny, COLOR_GRAY2BGR))
#
 #   return dilate(canny, ones((5,5), uint8), iterations = 1)

#@profile
def get_contour(G):
    edged = get_edged(G)
    __, contours, hierarchy = findContours(edged, RETR_LIST, CHAIN_APPROX_SIMPLE)
    contours = sorted(contours, key = contourArea, reverse = True)[:2]
    approx = 0
    first = False
    no_contour = True
    last_cnt = 0
    for cnt in contours:
        epsilon = 0.05 * arcLength(cnt, True)
        new_approx = approxPolyDP(cnt, epsilon, True)
        if first == False:
            if check_points(new_approx):
                last_cnt = cnt
                approx = approxPolyDP(cnt, epsilon, True)
                first = True
                no_contour = False
        elif check_points(new_approx):
            if (contourArea(last_cnt) < contourArea(cnt)):
                last_cnt = cnt
                approx = new_approx
                
    if first == False:
        return -1
    else:
        #image_copy = image.copy()
        #print approx[0][0]
        #circle(image_copy, tuple(approx[0][0]), 10, (0, 0, 255), -1)
        #circle(image_copy, tuple(approx[1][0]), 10, (0, 0, 255), -1)
        #circle(image_copy, tuple(approx[2][0]), 10, (0, 0, 255), -1)
        #circle(image_copy, tuple(approx[3][0]), 10, (0, 0, 255), -1)
        #polylines(image_copy, [approx], True, (0, 255, 255))
        #drawContours(image_copy, approx, -1, (0, 255, 0), 3)
        #imwrite("contours.jpg", image_copy)
        return approx

#@profile
def order_contour(points):
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

#@profile
def check_points(points):
    '''Checking there is four points to make a rectangle shape or not'''
    if len(points) == 4:
        return True 
    else:
        return False

#@profile
def distance_calculator(p1, p2):
    '''Calculates distance between 2 points'''
##        print libextraction.calSqrt(array(p1[0], p1[1]).ctypes.data_as(ctypes.c_void_p), array(p2[0], p2[1]).ctypes.data_as(ctypes.c_void_p))
##        print p1
    return sqrt((p1[0] - p2[0]) ** 2 + (p1[1] - p2[1]) ** 2)

#@profile
def get_perspective(points, counter):
    global warped, out2
    if type(points) is not ndarray:
        return 10
    if len(points) != 1:
        width, height = get_width_height(image)
        ordered_points = order_contour(points)
        
        width_perspective = int(max(distance_calculator(ordered_points[0], ordered_points[1]), \
                                    distance_calculator(ordered_points[2], ordered_points[3])))

        height_perspective = int(max(distance_calculator(ordered_points[0], ordered_points[3]), \
                                     distance_calculator(ordered_points[1], ordered_points[2])))
        
        if width_perspective < width / 4 or height_perspective < height / 4:
            return 20
        img_size = array([[0, 0], [width_perspective - 1, 0], [width_perspective - 1, height_perspective -1], \
            [0, height_perspective - 1]], dtype = "float32")
##            if width_perspective < (self.width / 4) or height_perspective < (self.height / 4):
##                return 20
        #3x3 blur mask
        warped_image = warpPerspective(gray_image(image), \
                                           getPerspectiveTransform(ordered_points, img_size), \
                                           (width_perspective, height_perspective))
        
        if width_perspective > height_perspective:     
            warped_image = resize(warped_image, (500, 300), INTER_NEAREST)
        elif height_perspective > width_perspective:
            warped_image = resize(warped_image, (300, 500), INTER_NEAREST)            
        warped = warped_image
        #imwrite("warped_adaptive/warped_new" + str(counter_warped) + ".jpg", warped)
        #imwrite("warped.jpg", warped)
        Thread(target = write_out, args = (out2, warped,)).start()
        return 30

    else:
        return 10

#@profile
def get_scaled():
    global resized_image
    '''Scales image short edge to L value '''
    width, height = get_width_height(warped)
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
    resized_image = resize(warped, (new_width, new_height), \
    interpolation = INTER_NEAREST)
    #imwrite("scaled.jpg", resized_image)

#@profile    
def get_cropped():
    '''Cropping image middle part L x L'''
    get_scaled()
    [width, height] = get_width_height(resized_image)
    if width != height:
        if width > height:
            if width % 2 == 0:
                crop_width = width / 2 - 1
                return get_blurred(resized_image[:, crop_width - L / 2:crop_width + L / 2], 3)
            else:
                crop_width = width / 2 - 1
                return get_blurred(resized_image[:, crop_width - (L/ 2 - 1):crop_width + (L/ 2 + 1)], 3)
        else:
            if height % 2 == 0:
                crop_height = height / 2 - 1
                return get_blurred(resized_image[crop_height - L / 2:crop_height + L / 2, :], 3)
            else:
                crop_height = height / 2 - 1
                return get_blurred(resized_image[crop_height - (L/ 2 - 1):crop_height + (L/ 2 + 1), :], 3)


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
