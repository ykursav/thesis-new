import preprocessing as pre
import extraction as extract
import matching as match
import cv2
import numpy as np
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

class ThreadTest:
    def __init__(self, image, N, M, L, tau1, tau2, tau3, tau4, tau5, counter):
        self.start_time = time.time()
        self.start_date = datetime.now()
        self.N = N
        self.M = M
        self.L = L
        self.true_counter = 0
        self.counter = counter
        self.image = image
        self.sigOrig = bitarray()
        f = open("signature.bin", "rb")
        self.sigOrig.fromfile(f)
        self.pre_process = pre.PreProcessing(L, False)
        self.extract_process = extract.SignatureExtraction(N, M, L)
        self.matching_process = match.SignatureMatching(self.sigOrig[0:238], tau1, tau2, tau3, tau4, tau5)

    
    def set_image(self, image):
        self.image = image

    def start_time(self):
        return self.start_time

    def preprocess(self):
        self.pre_process.set_image(self.image)
        points  = self.pre_process.get_contour(3)
        check = self.pre_process.get_perspective(points, self.counter)
        if not check:
            self.f_report.write("ERROR:Contour not detected\n") 
        else:
            image2 = self.pre_process.get_scaled()
            image3 = self.pre_process.get_cropped()
            return image3
        

    def extractprocess(self):
        
        self.extract_process.set_image(self.preprocess())        
        fragments_list = self.extract_process.get_all_fragments()
        sigGen = self.extract_process.get_signature(fragments_list)
        return sigGen

    def matchingprocess(self):
        self.matching_process.set_signature(self.extractprocess())
        if self.matching_process.signature_rejection()[0]:
            self.true_counter += 1.0
            
##        self.f_report.write(str(self.counter) + "\tHamming distance = " + str(self.matching_process.signature_rejection()[1]) \
##                       + "\n" + "Message: " + self.matching_process.signature_rejection()[2] + "\n")        

    def mainprocess(self):
        counter = 0
        
        self.matchingprocess()
        end = time.time()
##        if (end - self.start_time < 0.6):
##            self.f_report.write("Time spend: " + str(end-self.start_time) + "\n")
##        else:
##            self.f_report.write("Time spend: " + str(end-self.start_time) + "\n")
##            
            
            

    


    






    


   




