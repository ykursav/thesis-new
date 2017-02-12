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
f = open("signature_test16.bin", "r")
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
        
def signature_hamming(sigOrig_h, sigGen_h):
    return bitdiff(sigOrig_h, sigGen_h)

#@profile
def signature_scan():
    result_buffer = []
    for x in range(0, (len(sigOrig) / 6000) - 1):
       #print "Generated signature length" + str(len(sigGen))
       #print "Original signature length" + str(len(sigOrig[x * 3600:(x+1) * 3600]))
       #p = Thread(target = signature_hamming, args = (sigOrig[x * 12000:(x + 1) * 12000], q, ))
       #result = bitdiff(sigOrig[x * 12000:(x + 1) * 12000], sigGen)
       #p.start()
       #jobs.append(p)
       #print len(sigGen), len(sigOrig[x * 360:(x+1)*360+1440])
       result_buffer.append(signature_hamming(sigOrig[x * 6000:(x + 1) * 6000 + 6000], sigGen))

    return result_buffer
    #print signature_scan
def signature_deep_scan(range1, range2, sigGen_new):
    buffer_sig = sigOrig[range1:range2]
    result_buffer = []
    for x in range(0, 50):
        result_buffer.append(signature_hamming(buffer_sig[x * 240:(x + 1) * 240], sigGen_new))
    
    return result_buffer.index(min(result_buffer)), min(result_buffer)

def signature_o2o(sigGen_new):
    result_buffer = []
    for x in range(0, (len(sigOrig)) / 240 - 1):
        result_buffer.append(signature_hamming(sigOrig[x * 240:(x+1) * 240], sigGen_new))

    #print sigOrig[min(result_buffer) * 272: (min(result_buffer)+ 1)  * 272]
    #print len(sigOrig)/272
    return result_buffer.index(min(result_buffer)), min(result_buffer)

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
