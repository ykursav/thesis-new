import numpy as np
import cv2
from bitarray import bitarray

cv2.setUseOptimized(True)

class SignatureMatching:
    '''This class includes functions for signature matching'''
    def __init__(self, sigOrig, sigGen, tau1, tau2, tau3, tau4, tau5):
        self.sigOrig = sigOrig
        self.sigGen = sigGen
        self.tau1 = tau1
        self.tau2 = tau2
        self.tau3 = tau3
        self.tau4 = tau4
        self.tau5 = tau5

    def signature_hamming(self):
        return self.sigOrig ^ self.sigGen

    def signature_rejection(self):
        hamming_sig = self.signature_hamming()
        if sum(hamming_sig[0:120]) > self.tau1:
            return False, sum(hamming_sig), "tau1_fail"
        else:
            if sum(hamming_sig[0:240]) > self.tau2:
                return False, sum(hamming_sig), "tau2_fail" 
            else:
                if (sum(hamming_sig[0:240])) < self.tau3 or (sum(hamming_sig[240:476]) < self.tau4):
                    print sum(hamming_sig[0:240]), sum(hamming_sig[240:476])
                    return True, sum(hamming_sig),  "replica detected"
                else:
                    return False, sum(hamming_sig), "tau3_fail"

