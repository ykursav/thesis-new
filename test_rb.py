
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
camera.framerate = 30


##camera.led = False
rawCapture = PiRGBArray(camera, size = (1024, 768))

time.sleep(1)
counter = 0
true_counter = 0
camera.start_preview()
time.sleep(5)
f_report = open("Quality_Reports_Image/extras.txt","w")
for frame in camera.capture_continuous(rawCapture, format="bgr", use_video_port = True):
    start = time.time()
    image = frame.array
##    cv2.imshow("frame",image)
##    cv2.waitKey(0)
##    cv2.destroyAllWindows()
##    cv2.imwrite("capturetest.jpg", image)
    pre_process = pre.PreProcessing(image, 128, False)

    points  = pre_process.get_contour(3)

    check = pre_process.get_perspective(points, counter)
    if not check:
        print "ERROR:Contour not detected"
    else:
        image2 = pre_process.get_scaled()


        image3 = pre_process.get_cropped()



        extract_process = extract.SignatureExtraction(image3, 8, 4, 128)

        fragments_list = extract_process.get_all_fragments()
        
        sigGen = extract_process.get_signature(fragments_list)

        sigOrig = bitarray()
        f = open("signature.bin", "rb")
        sigOrig.fromfile(f)

        matching_process = match.SignatureMatching(sigOrig[0:476], sigGen, 48, 77, 20, 56, 44)

        if matching_process.signature_rejection()[0]:
            true_counter += 1.0
        f_report.write("Hamming distance = " + str(matching_process.signature_rejection()[1]) \
                       + "\n" + "Message: " + matching_process.signature_rejection()[2] + "\n")
##        print sigGen
##        print sigOrig
    

    rawCapture.truncate(0)
    end = time.time()
    f_report.write("Time spend: " + str(end-start) + "\n")
    counter += 1
    if counter == 1:
        ratio = true_counter / 10
        f_report.write("Success Ratio: " + str(ratio))
        break

   




