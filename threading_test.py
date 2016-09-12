
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



##pre.cv2.setUseOptimized(True)

#Define objects
sigOrig = bitarray()
f = open("signature.bin", "rb")
sigOrig.fromfile(f)
pre_process = pre.PreProcessing(128, False)
extract_process = extract.SignatureExtraction(8, 4, 128)
matching_process = match.SignatureMatching(sigOrig[0:238], 24, 38, 4, 28, 22)


camera = PiCamera()
camera.resolution = (544, 400)
#camera.framerate = 30


##camera.led = False
rawCapture = PiRGBArray(camera, size = (544, 400))


counter = 0
true_counter = 0
camera.start_preview()
time.sleep(5)
f_report = open("Quality_Reports_Image/new_timing7.txt","w")
for frame in camera.capture_continuous(rawCapture, format="bgr", use_video_port = True):
    start = time.time()
    image = frame.array
##    cv2.imshow("frame",image)
##    cv2.waitKey(0)
##    cv2.destroyAllWindows()
##    cv2.imwrite("capturetest.jpg", image)
    pre_process.set_image(image)
    points  = pre_process.get_contour(3)
    check = pre_process.get_perspective(points, counter)
    if not check:
        print "ERROR:Contour not detected"
    else:
        image2 = pre_process.get_scaled()
        image3 = pre_process.get_cropped()

        extract_process.set_image(image3)        
        fragments_list = extract_process.get_all_fragments()
        
        sigGen = extract_process.get_signature(fragments_list)

        matching_process.set_signature(sigGen)


        if matching_process.signature_rejection()[0]:
            true_counter += 1.0
        f_report.write(str(counter) + "Hamming distance = " + str(matching_process.signature_rejection()[1]) \
                       + "\n" + "Message: " + matching_process.signature_rejection()[2] + "\n")
##        print sigGen
##        print sigOrig
    

    rawCapture.truncate(0)
    end = time.time()
    f_report.write("Time spend: " + str(end-start) + "\n")
    counter += 1
    if counter == 10:
        ratio = true_counter / 100
        f_report.write("Success Ratio: " + str(ratio))
        break

   




