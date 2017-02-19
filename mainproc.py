import time
from PiVideoStream import PiVideoStream
from bitarray import bitarray
from preprocessing import set_initials_pre, get_contour, get_perspective, get_cropped
from extraction import set_initials, get_signature
from matching import set_initials_match, signature_rejection, signature_scan, signature_deep_scan, signature_o2o
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
#ap.add_argument("-v1", "--video1-name", type=str, default="video1.avi",
#    help="First video output file name can be assigned with that argument otherwise default is video1.avi")
ap.add_argument("-v2", "--video2-name", type=str, default="video2.avi",
    help="Second video output file name can be assigned with that argument otherwise default is video2.avi")
args = vars(ap.parse_args())

#f = open("signature.bin", "r")
# sigOrig = bitarray()
# sigOrig.fromfile(f)
# f.close()
# def process_thread(image, counter):
#     TT = tt.ThreadTest(image, 8, 4, 128, 24, 38, 4, 28, 22, counter, f_report)
#     check = TT.mainprocess()
logging.basicConfig(filename="debug_logs/" + args["file_name"], level = logging.DEBUG)
counter = 0
#@profile
sigGen = bitarray()
fourcc = cv2.VideoWriter_fourcc('X','V','I','D')
#out = cv2.VideoWriter("ADAPTIVE_THRESHOLD_TESTS/" + args["video1_name"], fourcc, 10.0, (544, 400))
out2 = cv2.VideoWriter("ADAPTIVE_THRESHOLD_TESTS/" + args["video2_name"], fourcc, 5.0, (500, 300))
#@profile
def initialize_set(image):
    global counter, sigGen
    set_initials_pre(128, image, counter, out2)
    #set_initials_pre(128, image, counter)
    points = get_contour(5)
    check = get_perspective(points, 0)
    if check == 10:
        counter -= 1
        return
    elif check == 20:
        logging.debug("Too small detection probably wrong")
        counter -= 1
        return
    crop = get_cropped()
    cv2.imwrite("cropped.jpg", crop)
    set_initials(8, 4, 128, crop)
    sig = bitarray()
    try:
        sig = get_signature()
        #if counter < 30:
        #   sigGen.extend(sig)
        #else:
        #   sigGen = sigGen[240:]
        #   sigGen[6960:] = sig
    except:
        logging.debug("Nonetype")
        counter -= 1
        return
    
    #if counter >= 29:
        #logging.debug(sigGen)
    #set_initials_match(sigGen, 24, 38, 4, 28, 22)
        #logging.debug(signature_scan())
        #scan_sig = signature_scan()
        #min_point = scan_sig.index(min(scan_sig))
        #range1 = 0
        #range2 = 0
        #if min_point != 0:
        #    range1 = (min_point * 3600) - 3600
        #    range2 = (min_point * 3600) + 3600
        #else:
        #    range1 = min_point * 3600
        #    range2 = (min_point * 3600) + 7200
        #print range1, range2
        #min_match, error_n = signature_deep_scan(range1, range2, sig)
        #match_frame = (range1 / 240) + min_match
        #logging.debug("Total error:" + str(min(scan_sig)) + "\n")
        #logging.debug("Match frame over 50:" +str(match_frame) + "\n")
        #logging.debug(sigGen)
        #logging.debug("Matched frame error:"  + str(error_n) + "\n")
        #if error_n >20:
        #    logging.debug("No match")
        #    time.sleep(0.05)
        #else:
        #    logging.debug("Match")
        #    time.sleep(0.4)
    #min_val, error_val = signature_o2o(sig)
    #logging.debug("Extracted signature:" + str(sig))
    #logging.debug("Matched frame over all scan:"  + str(min_val) + "\n")
    #logging.debug("Errors over all scan:" + str(error_val) + "\n")
    #check, hamming, message = signature_rejection(sig, min_val)
    #logging.debug("Result:" + message)
    #logging.debug("Match or Not:" + str(check))
    #if error_val < 10:
    #    logging.debug("Match")
    #else:
    #    logging.debug("Nomatch")
    #    time.sleep(0.05)
        
        
    
##    call([cmd], shell=True)

#@profile
# def main(camera):
#     global counter
#     last = 0
#     start = time.time()
#     for frame in camera.capture_continuous(rawCapture, format="bgr", use_video_port = True):
#         if last != 0:#             if (last + 0.1) - time.time() > 0:
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
    start = time.time()
    counter_old = 0
    #counter = 0
    while counter < args["num_frames"]:
        if (start + 0.2) - time.time() > 0 and counter_old != counter:
            try:
                time.sleep((start + 0.2) - time.time())
                logging.debug("Real time" + str(time.time()) + "\n")
            except:
                logging.debug("Under real time point " + str(time.time() - start) + "\n")
                time.sleep(0.4 - (time.time() - start))
        else:
            logging.debug("Under real time Point counter:" + str(time.time() - start) + "\n")
            #print 0.2 - (time.time() -start)
            if (0.2 - (time.time() - start)) > 0:
            	time.sleep(0.2 - (time.time() - start))
        start = time.time()
        frame = vs.read()
        initialize_set(frame)
        counter_old = counter 
        counter += 1
    vs.stop()
    #out.release()
    #out2.release()
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




    
