from bitarray import bitarray
from gc import enable

enable()
class SignatureMatching:
    '''This class includes functions for signature matching'''
    def __init__(self, sigOrig, tau1, tau2, tau3, tau4, tau5):
        self.sigOrig = sigOrig
        self.sigGen = bitarray()
        self.tau1 = tau1
        self.tau2 = tau2
        self.tau3 = tau3
        self.tau4 = tau4
        self.tau5 = tau5

    def set_signature(self, sigGen):
        self.sigGen = sigGen
        
    def signature_hamming(self):
        return self.sigOrig ^ self.sigGen

    def signature_rejection(self):
        hamming_sig = self.signature_hamming()
        if sum(hamming_sig[0:60]) > self.tau1:
            return False, sum(hamming_sig), "tau1_fail"
        else:
            if sum(hamming_sig[0:120]) > self.tau2:
                return False, sum(hamming_sig), "tau2_fail" 
            else:
                if (sum(hamming_sig[0:119])) < self.tau3 or (sum(hamming_sig[119:238]) < self.tau4):
##                    print sum(hamming_sig[0:119]), sum(hamming_sig[119:238])
                    return True, sum(hamming_sig),  "replica detected"
                else:
                    return False, sum(hamming_sig), "tau3_fail"

