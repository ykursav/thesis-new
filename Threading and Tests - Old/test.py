import preprocessing as pre
import extraction as extract
import matching as match
import cv2
import numpy as np
from bitarray import bitarray
import time
import multiprocessing
import sys

pre.cv2.setUseOptimized(True)

cap = cv2.VideoCapture(0)
cap.set(3, 1024)
cap.set(4, 768)
counter = 0
while(counter < 60):
    ret, image = cap.read()

    cv2.imshow("deneme", image)
    cv2.waitKey(0)
    cv2.destroyAllWindows()

    pre_process = pre.PreProcessing(image, 128, False)

    points  = pre_process.get_contour(3)

    check = pre_process.get_perspective(points)
    if not check:
        print "ERROR:Contour not detected"
    else:
        image2 = pre_process.get_scaled()

        cv2.imshow("scaled", image2)
        cv2.waitKey(0)
        cv2.destroyAllWindows()

        image3 = pre_process.get_cropped()

        cv2.imwrite("capturetest.jpg", image3)

        extract_process = extract.SignatureExtraction(image3, 8, 4, 128)

        fragments_list = extract_process.get_all_fragments()
        
        sigGen = extract_process.get_signature(fragments_list)

        sigOrig = bitarray()
        f = open("../SignatureOriginal/signature.bin", "rb")
        sigOrig.fromfile(f)

        matching_process = match.SignatureMatching(sigOrig[0:476], sigGen, 48, 77, 8, 56, 44)

        print matching_process.signature_rejection()

        print sigGen
        print sigOrig

        time.sleep(0.5)

    counter += 1

