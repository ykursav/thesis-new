import time
from PiVideoStream import PiVideoStream
from bitarray import bitarray
from preprocessing import set_initials_pre, get_contour, get_perspective, get_cropped
from extraction import set_initials, get_signature
from matching import set_initials_match, signature_rejection, signature_scan
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
ap.add_argument("-f", "--file-name", type=str, default="debug_log.log",
    help="Filename can be assigned with that argument otherwise default is debug_log.log")
args = vars(ap.parse_args())

#f = open("signature.bin", "r")
# sigOrig = bitarray()
# sigOrig.fromfile(f)
# f.close()
# def process_thread(image, counter):
#     TT = tt.ThreadTest(image, 8, 4, 128, 24, 38, 4, 28, 22, counter, f_report)
#     check = TT.mainprocess()
logging.basicConfig(filename=args["file_name"], level = logging.DEBUG)
counter = 0
#@profile
sigGen = bitarray()
fourcc = cv2.VideoWriter_fourcc('X','V','I','D')
out = cv2.VideoWriter("ADAPTIVE_THRESHOLD_TESTS/test03.avi", fourcc, 20.0, (640, 480))
#@profile
def initialize_set(image):
    global counter, sigGen
    set_initials_pre(128, image, counter, out)
    points = get_contour(3)
    check = get_perspective(points, 0)
    if check == 10:
        counter -= 1
        return
    elif check == 20:
        logging.debug("Too small detection probably wrong")
        counter -= 1
        return
    crop = get_cropped()
    sig = bitarray()
    set_initials(16, 8, 128, crop)
    try:
        sig = get_signature()
        if counter < 50:
           sigGen.extend(sig)
        else:
           sigGen = sigGen[72:]
           sigGen[3528:] = sig
    except:
        logging.debug("Nonetype")
        counter -= 1
        return
    if counter >= 49:
        #logging.debug(sigGen)
        set_initials_match(sigGen, 24, 38, 4, 28, 22)
        #logging.debug(signature_scan())
        scan_sig = signature_scan()
        #logging.debug(str(min(scan_sig)))
        
        
    
##    call([cmd], shell=True)

#@profile
# def main(camera):
#     global counter
#     last = 0
#     start = time.time()
#     for frame in camera.capture_continuous(rawCapture, format="bgr", use_video_port = True):
#         if last != 0:
#             if (last + 0.1) - time.time() > 0:
#                 time.sleep((last + 0.1) - time.time())
#             #else:
#                 #logging.debug('Under Real_time Point:' + str(time.time() - last) + '\n')
#         #logging.debug('Start time:' +str(start_time) + '\n')
#         image = frame.array
#         #t = Thread(target = process_thread, args = (image, counter, ))
#         #t.start()
#         initialize_set(image)
#        # t.start()
#         rawCapture.truncate(0)
#         counter += 1
#         if counter == 100:
#             break
#         last = time.time()
        
# ##    print "reached zero"
#     end = time.time()
#     logging.debug("Total time:", end - start)

def pi_stream(vs):
    global counter
    #start_time = time.time()
    start = 0
    while counter < args["num_frames"]:
        if (start + 0.1) - time.time() > 0 and counter_old != counter:
            time.sleep((start + 0.1) - time.time())
            logging.debug("Real time" + str(time.time()) + "\n")
        else:
            logging.debug("Under real time Point " + str(time.time() - start) + "\n")
        start = time.time()
        frame = vs.read()
        counter_old = counter
        initialize_set(frame)
        counter += 1
    vs.stop()
    out.release()
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




    
