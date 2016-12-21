import time
from PiVideoStream import PiVideoStream
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
ap = argparse.ArgumentParser()
ap.add_argument("-n", "--num-frames", type=int, default=100,
    help="Number of frames which will be processed should be defined in that area")
args = vars(ap.parse_args())

f = open("signature.bin", "r")
sigOrig = bitarray()
sigOrig.fromfile(f)
f.close()
# def process_thread(image, counter):
#     TT = tt.ThreadTest(image, 8, 4, 128, 24, 38, 4, 28, 22, counter, f_report)
#     check = TT.mainprocess()
logging.basicConfig(filename='debug_log11.log', level = logging.DEBUG)

#@profile


def initialize_set(image, counter):
    set_initials_pre(128, image, counter)
    points = get_contour(3)
    check = get_perspective(points, 0)
    if check == 10:
        return
    set_initials(8, 4, 128, get_cropped())
    try:
        sigGen = get_signature()
    except:
        logging.debug("Nonetype")
        return
    set_initials_match(sigOrig[0:238], sigGen, 24, 38, 4, 28, 22)
        
    
##    call([cmd], shell=True)

#@profile
def main(camera):
    counter = 0
    last = 0
    start = time.time()
    for frame in camera.capture_continuous(rawCapture, format="bgr", use_video_port = True):
        if last != 0:
            if (last + 0.1) - time.time() > 0:
                time.sleep((last + 0.1) - time.time())
            #else:
                #logging.debug('Under Real_time Point:' + str(time.time() - last) + '\n')
        #logging.debug('Start time:' +str(start_time) + '\n')
        image = frame.array
        #t = Thread(target = process_thread, args = (image, counter, ))
        #t.start()
        initialize_set(image)
       # t.start()
        rawCapture.truncate(0)
        counter += 1
        if counter == 100:
            break
        last = time.time()
        
##    print "reached zero"
    end = time.time()
    logging.debug("Total time:", end - start)

def pi_stream(vs):
    counter = 0
    #start_time = time.time()
    start = 0
    while counter < args["num_frames"]:
        if (start + 0.1) - time.time() > 0:
            time.sleep((start + 0.1) - time.time())
            logging.debug("Real time" + str(time.time()) + "\n")
        else:
            logging.debug("Under real time Point " + str(time.time() - start) + "\n")
        start = time.time()
        frame = vs.read()
        initialize_set(frame, counter)
        counter += 1
    vs.stop()
    #end_time = time.time()
    #logging.debug("Total time:" + str(end_time - start_time))

    
    

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




    
