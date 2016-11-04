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
    def __init__(self, image, N, M, L, tau1, tau2, tau3, tau4, tau5, counter, f_report):
        self.start_time = time.time()
        self.start_date = datetime.now()
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

    
    def set_image(self, image):
        self.image = image

    def start_time(self):
        return self.start_time

    def preprocess(self):
        self.pre_process.set_image(self.image)
        points  = self.pre_process.get_contour(3)
        check = self.pre_process.get_perspective(points, self.counter)
        if check == 10:
            return 10
        elif check == 20:
            return 20
        else:
            image2 = self.pre_process.get_scaled()
            image3 = self.pre_process.get_cropped()
            self.image_preprocessed = image3
            return 0
        

    def extractprocess(self):
        
        self.extract_process.set_image(self.image_preprocessed)        
        sigGen = self.extract_process.get_signature()
        self.sigGen = sigGen

    def matchingprocess(self):
        self.matching_process.set_signature(self.sigGen)
        if self.matching_process.signature_rejection()[0]:
            return 30
            
        #self.f_report.write(str(self.counter) + "\tHamming distance = " + str(self.matching_process.signature_rejection()[1]) \
        #              + "\n" + "Message: " + self.matching_process.signature_rejection()[2] + "\n")        

    def mainprocess(self):
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
            
            

    


    






    


   




