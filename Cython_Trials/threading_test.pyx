import preprocessing as pre
import extraction as extract
import matching as match
import cv2
import numpy as np
cimport numpy as np
from bitarray import bitarray
import time
import multiprocessing
import sys
##from picamera import PiCamera
##from picamera.array import PiRGBArray
from time import sleep
from datetime import datetime
import sys

image = []

cdef class ThreadTest:
    cdef int N, M, L, counter
    cdef np.ndarray image, image_preprocessed
    def __init__(self, image, N, M, L, tau1, tau2, tau3, tau4, tau5, counter, f_report):
##        self.start_time = time.time()
##        self.start_date = datetime.now()
        self.N = N
        self.M = M
        self.L = L
        self.counter = counter
        self.image = image
        self.image_preprocessed = np.array([])
        self.sigOrig = bitarray()
        self.sigGen = bitarray()
        f = open("signature.bin", "rb")
        self.f_report = f_report
        self.sigOrig.fromfile(f)
        self.pre_process = pre.PreProcessing(L, False)
        self.extract_process = extract.SignatureExtraction(N, M, L)
        self.matching_process = match.SignatureMatching(self.sigOrig[0:238], tau1, tau2, tau3, tau4, tau5)

    
    cpdef set_image(self, image):
        self.image = image

##    cpdef start_time(self):
##        return self.start_time

    cpdef preprocess(self):
        self.pre_process.set_image(self.image)
        check = self.pre_process.get_perspective(self.pre_process.get_contour(3), self.counter)
        if check == 10:
            return 10
        elif check == 20:
            return 20
        else:
            self.image_preprocessed = self.pre_process.get_cropped()
            return 0
        

    cpdef extractprocess(self):
        self.extract_process.set_image(self.image_preprocessed)        
        self.sigGen = self.extract_process.get_signature(self.extract_process.get_all_fragments())
        print self.sigGen

    cpdef matchingprocess(self):
        self.matching_process.set_signature(self.sigGen)
        if self.matching_process.signature_rejection()[0]:
            return 30
            
##        self.f_report.write(str(self.counter) + "\tHamming distance = " + str(self.matching_process.signature_rejection()[1]) \
##                       + "\n" + "Message: " + self.matching_process.signature_rejection()[2] + "\n")        

    cpdef mainprocess(self):
        cdef int counter, check
        counter = 0
        check = self.preprocess()
        if check == 10:
            self.f_report.write("ERROR:Contour not detected\n")
            return 10
        elif check == 20:
            self.f_report.write("ERROR:Contour is too small \n")
            return 20
        else:
            self.extractprocess()
            self.matchingprocess()
##        if (end - self.start_time < 0.6):
##            self.f_report.write("Time spend: " + str(end-self.start_time) + "\n")
##        else:
##            self.f_report.write("Time spend: " + str(end-self.start_time) + "\n")
##            
            
            

    


    






    


   




