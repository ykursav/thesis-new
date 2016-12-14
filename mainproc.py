import time
from PiVideoStream import PiVideoStream
#from datetime import datetime
from bitarray import bitarray
from preprocessing import set_initials_pre, get_contour, get_perspective, get_cropped
from extraction import set_initials, get_signature
from matching import set_initials_match, signature_rejection
#from subprocess import call
from threading import Thread, active_count
from picamera import PiCamera
from picamera.array import PiRGBArray
#import threading_test as tt
from multiprocessing import Process
import cv2
import logging
#import io
import numpy as np
import argparse
#import Queue
##cmd = "python /home/pi/master-thesis/threading_test.py image"
#f_report = open("Quality_Reports_Image/WithoutThread/new_timing00_rpi3_lite.txt", "w")
#ap = argparse.ArgumentParser()
#ap.add_argument("-n", "--num-frames", type=int, default=100,
 #   help="Number of frames which will be processed should be defined in that area")
#args = vars(ap.parse_args())
#startt = time.time()
#starttt = time.clock()
f = open("signature.bin", "r")
sigOrig = bitarray()
sigOrig.fromfile(f)
f.close()
# def process_thread(image, counter):
#     TT = tt.ThreadTest(image, 8, 4, 128, 24, 38, 4, 28, 22, counter, f_report)
#     check = TT.mainprocess()
#logging.basicConfig(filename='debug_log09.log', level = logging.DEBUG)
#
#@profile


def initialize_set(image, counter):
    set_initials_pre(128, image, counter)
    points = get_contour(3)
    check = get_perspective(points, 0)
    set_initials(8, 4, 128, get_cropped())
    sigGen = get_signature()
    set_initials_match(sigOrig[0:238], sigGen, 24, 38, 4, 28, 22)
        
    
##    call([cmd], shell=True)

#@profile
def main(camera):
    counter = 0
    last = 0
    for frame in camera.capture_continuous(rawCapture, format="bgr", use_video_port = True):
        if last != 0:
            if (last + 0.1) - time.time() > 0:
                time.sleep((last + 0.1) - time.time())
                logging.debug("On time\n")
            else:
                logging.debug('Under Real_time Point:' + str(time.time() - last) + '\n')
        start_time = time.time()
        logging.debug('Start time:' +str(start_time) + '\n')
        image = frame.array
        #t = Thread(target = process_thread, args = (image, counter, ))
        #t.start()
        initialize_set(image)
       # t.start()
        rawCapture.truncate(0)
        counter += 1
        if counter == 100:
            break
        last = start_time
        
##    print "reached zero"
    end = time.time()
    print("Total time:" + str(end - start))

@profile
def pi_stream(vs):
    counter = 0
    start = time.time()
    #starr = time.time()
    last = 0
    while counter < 100:
#args["num_frames"]:
        if last != 0:
            if (last + 0.1) - time.time() > 0:
                time.sleep((last + 0.1) - time.time())
                #logging.debug("On time\n")
            #else:
                #logging.debug('Under real time point:' + str(time.time() -last) + "\n")
        start_time = time.time()
        frame = vs.read()
        try:
            initialize_set(frame, counter)
        except TypeError:
            #logging.debug("Type error:")
            pass
        counter += 1
        last = start_time
    vs.stop()
    end_time = time.time()
    #endr = time.time()
    #logging.debug("Total time" + str(end_time - start))
    print(end_time - start)
    #print(endr -starr)
    

if __name__ == "__main__":
   # camera = PiCamera()
   # camera.resolution = (544, 400)
   # rawCapture = PiRGBArray(camera, size = (544, 400))
   # camera.framerate = 30
   # camera.start_preview()
##    time.sleep(3)
##    camera.stop_preview()
##    time.sleep(2)
    vs = PiVideoStream().start()
    time.sleep(2)
    #p1 = Thread(target = main, args = (camera, ))
    #p1.start()
    #p1.join()
    pi_stream(vs)
    #endd = time.time()
    #enddd = time.clock()
    #print(endd - startt)
    #print(enddd - starttt)



    
