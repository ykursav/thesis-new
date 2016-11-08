from preprocessing import PreProcessing
from extraction import SignatureExtraction
from matching import SignatureMatching
import cv2
import numpy as np
from bitarray import bitarray
import time
import multiprocessing
import sys
import datetime
import gc


start_time = time.time()
try:
    image = cv2.imread("flash1.jpg", 1)
##    image = pre.cv2.imread(img_name, 1)
except:
    print "ERROR: This image is not exist or unknown format."
    sys.exit(0)
    
extract_process = SignatureExtraction(8, 4, 128)
pre_process = PreProcessing(128, False)
sigOrig = bitarray()
f = open("signature.bin", "rb")
#signatures must import from a binary file
sigOrig.fromfile(f)
matching_process = SignatureMatching(sigOrig[0:238], 24, 38, 4, 28, 22)

print "start" + str(datetime.datetime.now())
pre_process.set_image(image)
# pre_install_time = time.time()
points  = pre_process.get_contour(3)
# pre_point_time = time.time()
check = pre_process.get_perspective(points, 0)
if not check:
    print "ERROR:Contour not detected"
    sys.exit(0)
# warped_time = time.time()
# scaled_time = time.time()
# cropped_time = time.time()
# vis1 = pre_process.get_edged(9)
# edge_time = time.time()



extract_process.set_image(pre_process.get_cropped())

sigGen = extract_process.get_signature()

# print "Signature len:",len(sigGen)
# print sigOrig, len(sigOrig)
# print sigGen, len(sigGen)

matching_process.set_signature(sigGen)
print matching_process.signature_rejection()
end_time = time.time()
# print "Preinstall time:" + str(pre_install_time - start_time)
# print "Points time:" + str(pre_point_time - pre_install_time)
# print "warped_time" + str(warped_time - pre_point_time)
# print "Scaling time: " + str(scaled_time - warped_time)
# print "Cropping time: " + sstr(cropped_time - scaled_time)
# print "Cropping time: " + str(edge_time - cropped_time)
# print "Extract time:" + str(extract_install - edge_time)
# print "Extraction time:" + str(extraction_time - extract_install)
# print "Signature time:" + str(signature_time - extraction_time)
# print "Matching time:" + str(end_time - signature_time)
print "Total time:" + str(end_time - start_time)
# print matching_process.signature_rejection()
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_contour.jpg', image1)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_scaled.jpg', image2)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_cropped.jpg', image3)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_warped.jpg', warped)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot0.jpg', rot0)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot90.jpg', rot90)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot180.jpg', rot180)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_rot270.jpg', rot270)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_edged.jpg', vis1)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_fragment.jpg', fragment)
# cv2.imwrite("outputv2/" + img_name[0:-4] + '_flipped.jpg', flipped1)

