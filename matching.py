from bitarray import bitarray, bitdiff
from gc import enable
#from multiprocessing import Process, Queue
#from threading import Thread
#from Queue import Queue

enable()
tau1 = 0
tau2 = 0
tau3 = 0
tau4 = 0
tau5 = 0
sigOrig = bitarray()
sigGen = bitarray()
f = open("signature_test2.bin", "r")
sigOrig = bitarray()
sigOrig.fromfile(f)
f.close()
def set_initials_match(sigGen_m, tau1_m, tau2_m, tau3_m, tau4_m, tau5_m):
    global tau1, tau2, tau3, tau4, tau5, sigOrig, sigGen
    sigGen = sigGen_m
    tau1 = tau1_m
    tau2 = tau2_m
    tau3 = tau3_m
    tau4 = tau4_m
    tau5 = tau5_m

# class SignatureMatching:
#     '''This class includes functions for signature matching'''
#     def __init__(self, sigOrig, tau1, tau2, tau3, tau4, tau5):
#         self.sigOrig = sigOrig
#         self.sigGen = bitarray()
#         self.tau1 = tau1
#         self.tau2 = tau2
#         self.tau3 = tau3
#         self.tau4 = tau4
#         self.tau5 = tau5

def set_signature(sigGen_m):
    global sigGen
    sigGen = sigGen_m
        
def signature_hamming(sigOrig_h):
    return bitdiff(sigOrig_h, sigGen)

@profile
def signature_scan():
    result_buffer = []
    result_buffer = result_buffer.append
    for x in range(0, (len(sigOrig) / 60000) - 1):
       #print "Generated signature length" + str(len(sigGen))
       #print "Original signature length" + str(len(sigOrig[x * 12000:(x+1) * 12000]))
       #p = Thread(target = signature_hamming, args = (sigOrig[x * 12000:(x + 1) * 12000], q, ))
       #result = bitdiff(sigOrig[x * 12000:(x + 1) * 12000], sigGen)
       #p.start()
       #jobs.append(p)
       result_buffer(signature_hamming(sigOrig[x * 12000:(x + 1) * 12000]))

    return result_buffer
    #print signature_scan

def signature_rejection():
    hamming_sig = signature_hamming()
    if sum(hamming_sig[0:60]) > tau1:
        return False, sum(hamming_sig), "tau1_fail"
    else:
        if sum(hamming_sig[0:120]) > tau2:
            return False, sum(hamming_sig), "tau2_fail" 
        else:
            if (sum(hamming_sig[0:119])) < tau3 or (sum(hamming_sig[119:238]) < tau4):
    ##                    print sum(hamming_sig[0:119]), sum(hamming_sig[119:238])
                return True, sum(hamming_sig),  "replica detected"
            else:
                return False, sum(hamming_sig), "tau3_fail"

