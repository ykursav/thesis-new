import preprocessing_orig_sig as pre
import extraction as extract
import matching as match
import cv2
import numpy as np
from bitarray import bitarray
import time
import multiprocessing
import sys

pre.cv2.setUseOptimized(True)

img_name = raw_input("Please enter image name which will process for feature extraction: ")
img_name += ".jpg"


image = 0
try:
    image = pre.cv2.imread(img_name, 1)
except:
    print "ERROR: This image is not exist or unknown format."
start_time = time.time()
pre_process = pre.PreProcessing(image, 128, False)
# pre_install_time = time.time()
# points  = pre_process.get_contour(3)
# # pre_point_time = time.time()
# check = pre_process.get_perspective(points)
# if not check:
#     print "ERROR:Contour not detected"
#     sys.exit(0)
# warped_time = time.time()
image2 = pre_process.get_scaled()
# scaled_time = time.time()
image3 = pre_process.get_cropped()
# cropped_time = time.time()
# vis1 = pre_process.get_edged(9)
# edge_time = time.time()

extract_process = extract.SignatureExtraction(image3, 8, 4, 128)
extract_install = time.time()





fragments_list = extract_process.get_all_fragments()
extraction_time = time.time()



sigOrig = extract_process.get_signature(fragments_list)


f = open("signature.bin", "wb")
f.write(sigOrig.tobytes())
f.close()
