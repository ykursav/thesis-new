import preprocessing as pre
import extractionv4 as extract
import matching as match
import cv2
import numpy as np
from bitarray import bitarray
import time
img_name = raw_input("Please enter image name which will process for feature extraction: ")
img_name += ".jpg"


image = 0
try:
    image = cv2.imread(img_name, 1)
except:
    print "ERROR: This image is not exist or unknown format."
start_time = time.time()
pre_process = pre.PreProcessing(image, 128, False)
pre_install_time = time.time()
points  = pre_process.get_contour(9)
pre_point_time = time.time()
warped = pre_process.get_perspective(points)
warped_time = time.time()
image2 = pre_process.get_scaled()
scaled_time = time.time()
image3 = pre_process.get_cropped()
cropped_time = time.time()
vis1 = pre_process.get_edged(9)
edge_time = time.time()

extract_process = extract.SignatureExtraction(image3, 8, 4, 128)
extract_install = time.time()

rot0 = extract_process.get_blocks()
rotations_time = time.time()


# flipped1 = cv2.flip(rot0, 1)

# vis = np.zeros((248,248))

avg_lum_list = []
avg_sing_list = []
std_lum_list = []
std_sing_list = []
rot90, rot180, rot270 = extract_process.basic_rotations(rot0)
basic_rotations_time = time.time()



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


extraction_time = time.time()



sig1 = extract_process.get_signature(std_lum_list)
sig2 = extract_process.get_signature(avg_lum_list)
sig3 = extract_process.get_signature(std_sing_list)
sig4 = extract_process.get_signature(avg_sing_list)

signature_time = time.time()

print "Preinstall time:" + str(pre_install_time - start_time)
print "Points time:" + str(pre_point_time - pre_install_time)
print "warped_time" + str(warped_time - pre_point_time)
print "Scaling time: " + str(scaled_time - warped_time)
print "Cropping time: " + str(cropped_time - scaled_time)
print "Cropping time: " + str(edge_time - cropped_time)
print "Extract time:" + str(extract_install - edge_time)
print "Rotation time:" + str(rotations_time - extract_install)
print "Basic Rotation time:" + str(basic_rotations_time - rotations_time)
print "Extraction time:" + str(extraction_time - basic_rotations_time)
print "Signature time:" + str(signature_time - extraction_time)


sig1.extend(sig2)
sig1.extend(sig3)
sig1.extend(sig4)

sigGen = sig1
sigOrig = bitarray()
f = open("signature.bin", "rb")
#signatures must import from a binary file
sigOrig.fromfile(f)
print sigOrig, len(sigOrig)
print sigGen, len(sigGen)


matching_process = match.SignatureMatching(sigOrig[0:476], sigGen, 48, 77, 8, 56, 44)

end_time = time.time()
print "Total time:" + str(end_time - start_time)
print matching_process.signature_rejection()
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_contour.jpg', image1)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_scaled.jpg', image2)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_cropped.jpg', image3)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_warped.jpg', warped)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot0.jpg', rot0)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot90.jpg', rot90)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot180.jpg', rot180)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot270.jpg', rot270)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_edged.jpg', vis1)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_fragment.jpg', fragment)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_flipped.jpg', flipped1)

