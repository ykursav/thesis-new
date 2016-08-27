import preprocessing as pre
import extraction as extract
import matching as match
import cv2
import numpy as np
from bitarray import bitarray
import time
import multiprocessing
import sys
from picamera import PiCamera
from picamera.array import PiRGBArray
from time import sleep



pre.cv2.setUseOptimized(True)

camera = PiCamera()
camera.resolution = (1024, 768)
camera.framerate = 10
rawCapture = PiRGBArray(camera, size = (1024, 768))

time.sleep(1)

for frame in camera.capture_continuous(rawCapture, format="bgr", use_video_port = True):
    image = frame.array
    cv2.imshow("frame",image)
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
    
    rawCapture.truncate(0)


   




