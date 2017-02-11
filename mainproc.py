import time
import cv2
import logging
import numpy as np
import argparse
from InitializeSet import InitializeSet
from matching import set_initials_match, signature_rejection, signature_scan, signature_deep_scan, signature_o2o

##cmd = "python /home/pi/master-thesis/threading_test.py image"
#f_report = open("Quality_Reports_Image/WithoutThread/new_timing00_rpi3_lite.txt", "w")
ap = argparse.ArgumentParser()
ap.add_argument("-n", "--num-frames", type=int, default=100,
    help="Number of frames which will be processed should be defined in that area")
ap.add_argument("-f", "--file-name", type=str, default="debug_log.log",
    help="Filename can be assigned with that argument otherwise default is debug_log.log")
#ap.add_argument("-v1", "--video1-name", type=str, default="video1.avi",
#    help="First video output file name can be assigned with that argument otherwise default is video1.avi")
# ap.add_argument("-v2", "--video2-name", type=str, default="video2.avi",
#     help="Second video output file name can be assigned with that argument otherwise default is video2.avi")
args = vars(ap.parse_args())

logging.basicConfig(filename="debug_logs_thread/" + args["file_name"], level = logging.DEBUG)

#out = cv2.VideoWriter("ADAPTIVE_THRESHOLD_TESTS/" + args["video1_name"], fourcc, 10.0, (544, 400))
#@profile
def matching_part(sig):
    global counter, sigGen
    #set_initials_pre(128, image, counter)
    
    
    
    #if counter >= 24:
        #logging.debug(sigGen)
        #set_initials_match(sigGen, 24, 38, 4, 28, 22)
        #logging.debug(signature_scan())
        #scan_sig = signature_scan()
        #min_point = scan_sig.index(min(scan_sig))
        #range1 = 0
        #range2 = 0
        #if min_point != 0:
        #    range1 = (min_point * 360) - 720
        #    range2 = (min_point * 360) + 1800
        #else:
        #    range1 = min_point * 360
        #    range2 = (min_point * 360) + 2520
        #print range1, range2
    #min_match, error_n = signature_deep_scan(range1, range2, sig)
    #match_frame = (range1 / 72) + min_match
    #logging.debug("Total error:" + str(min(scan_sig)) + "\n")
    #logging.debug("Match frame over 25:" +str(match_frame) + "\n")
    #logging.debug("Matched frame error:"  + str(error_n) + "\n")
        #if error_n >20:
        #    logging.debug("No match")
        #    time.sleep(0.05)
        #else:
        #    logging.debug("Match")
        #    time.sleep(0.4)
    min_val, error_val = signature_o2o(sig)
    logging.debug("Matched frame over all scan:"  + str(min_val) + "\n")
    logging.debug("Errors over all scan:" + str(error_val) + "\n")
    if error_val < 10:
        logging.debug("Match")
    else:
        logging.debug("Nomatch")
        time.sleep(0.05)
        
        
    
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
@profile
def pi_stream(inse):
    global counter
    #start_time = time.time()
    start = time.time()
    counter_old = 0
    counter = inse.get_counter()
    #counter = 0
    while counter < args["num_frames"]:
        if (start + 0.1) - time.time() > 0 and counter_old != counter:
            try:
                time.sleep((start + 0.1) - time.time())
                logging.debug("Real time" + str(time.time()) + "\n")
            except:
                logging.debug("Under real time point " + str(time.time() - start) + "\n")
                time.sleep(0.2 - (time.time() - start))
        else:
            logging.debug("Under real time Point counter:" + str(time.time() - start) + "\n")
            #print 0.2 - (time.time() -start)
            if (0.1 - (time.time() - start)) > 0:
            	time.sleep(0.1 - (time.time() - start))
        start = time.time()
        sig = inse.send_signature()
        #matching_part(inse.get_signature())
        counter_old = counter 
        counter += 1
    inse.stop()
    #out.release()
    #out2.release()
    #end_time = time.time()
    #logging.debug("Total time:" + str(end_time - start_time))

    
    

if __name__ == "__main__":
    inse = InitializeSet().start()
    time.sleep(2)
    pi_stream(inse)




    
