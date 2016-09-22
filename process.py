import time
from subprocess import call
from threading import Thread, active_count, Timer
##from multiprocessing import Process, Queue
from picamera import PiCamera
from picamera.array import PiRGBArray
import threading_test as tt
import cv2
import io
import numpy as np
from Queue import Queue
import sys, traceback
import datetime

cmd = "python /home/pi/master-thesis/threading_test.py image"
q = Queue()
f_report = open("Quality_Reports_Image/new_timing11.txt","w")
camera = PiCamera()
camera.resolution = (544, 400)
rawCapture = PiRGBArray(camera, size = (544, 400))
camera.start_preview()
time.sleep(5)

def process_thread(counter, name):
    start = time.clock()
    f_report.write(name + ' started' + str(start) + '\n')
##    print name + ' started' + str(start)
##    print datetime.datetime.now()
    TT = tt.ThreadTest(q.get() , 8, 4, 128, 24, 38, 4, 28, 22, counter)
    TT.mainprocess()
    end = time.clock()
    f_report.write(name + ' finished' + str(end) + '\n')
    f_report.write(name + ' total time passed ' + str(end -  start) + '\n')
##    print str(name) + ' '  + str(end-start)

def capture_process():
##    f_report.write('Image capture started\n')
    start = time.clock()
    camera.capture(rawCapture, use_video_port = True, format = "bgr")
    image = rawCapture.array
    q.put(image)
    rawCapture.truncate(0)
    end = time.clock()
##  print end - start
##    f_report.write('Image capture time:' + str(end - start) + '\n')

    
    
##    call([cmd], shell=True)





if __name__ == "__main__":
        counter = 0
        last = 0
        start_time = time.clock()
##        p_cap = Thread(target = capture_process, args = (q,))
##        p_cap.start()
        end = 0
        start = 0
        while(True):
##            cv2.imwrite('queue_test' + str(counter) +'.jpg', q.get())
            start = time.clock()
            t = Timer(0.1, capture_process)
            t.start()
            if q.qsize() != 0:
                name = 'Process' + str(counter)
                p = Thread(target = process_thread, args = (counter, name, ))
                p.start()
                counter += 1
            if counter == 100:
                break
            t.join()
            end = time.clock()
            f_report.write('Image capture time:' + str(end - start) + '\n')
            
##        p_cap.join()
        print "reached zero"
        end_time = time.clock()
        f_report.write('Total time:' + str(end_time - start_time) + '\n')
        p.join()
##    for frame in camera.capture_continuous(rawCapture, format="bgr", use_video_port = True):
##
##        start_time = time.time()
##        f_report.write('Start time:' + str(start_time) + '\n')
##        image = frame.array
##        p = Process(target = process_thread, args = (image, counter))
##        p.start()
##        
##        rawCapture.truncate(0)
##        counter += 1
##        
##        if counter == 100:
##            break
##        last = time.time()
##        if (last - start_time) < 0.1:
##            time.sleep(0.1 - (last - start_time))
##        else:
##            print (last - start_time)
    

    
