import preprocessing as pre
import extractionv4 as extract
import cv2
import numpy as np

img_name = raw_input("Please enter image name which will process for feature extraction: ")
img_name += ".jpg"

image = 0
try:
    image = cv2.imread(img_name, 1)
except:
    print "ERROR: This image is not exist or unknown format."

pre_process = pre.PreProcessing(image, 128, False)

points, image1 = pre_process.get_contour(9)
warped = pre_process.get_perspective(points)

image2 = pre_process.get_scaled()
image3 = pre_process.get_cropped()

extract_process = extract.SignatureExtraction(image3, 8, 4, 128)
rot0 = extract_process.get_blocks()


# flipped1 = cv2.flip(rot0, 1)

# vis = np.zeros((248,248))

avg_lum_list = []
avg_sing_list = []
std_lum_list = []
std_sing_list = []
rot90, rot180, rot270 = extract_process.basic_rotations(rot0)
for y in range(0, 15):
    for x in range(y, 15):
        if x == y or x == 14:
            if x == 14 and y == 14:
                avg_lum, std_lum, avg_sing, std_sing = extract_process.get_fragment(rot0, rot90, rot180, rot270, x, y, -1)
                avg_lum_list.append(avg_lum)
                avg_sing_list.append(avg_sing)
                std_lum_list.append(std_lum)
                std_sing_list.append(std_sing)
            else:
                avg_lum, std_lum, avg_sing, std_sing = extract_process.get_fragment(rot0, rot90, rot180, rot270, x, y, 1)
                avg_lum_list.append(avg_lum)
                avg_sing_list.append(avg_sing)
                std_lum_list.append(std_lum)
                std_sing_list.append(std_sing)
        else:
            avg_lum, std_lum, avg_sing, std_sing = extract_process.get_fragment(rot0, rot90, rot180, rot270, x, y, 0)
            avg_lum_list.append(avg_lum)
            avg_sing_list.append(avg_sing)
            std_lum_list.append(std_lum)
            std_sing_list.append(std_sing)

sig1 = extract_process.get_signature(std_lum_list)
sig2 = extract_process.get_signature(avg_lum_list)
sig3 = extract_process.get_signature(std_sing_list)
sig4 = extract_process.get_signature(avg_sing_list)

sig1.extend(sig2)
sig1.extend(sig3)
sig1.extend(sig4)

print sig1,len(sig1), sig4
cv2.imwrite("outputv2/" + img_name[0:-4] + '_scaled.jpg', image2)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_cropped.jpg', image3)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_warped.jpg', warped)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot0.jpg', rot0)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot90.jpg', rot90)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot180.jpg', rot180)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot270.jpg', rot270)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_fragment.jpg', fragment)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_flipped.jpg', flipped1)

