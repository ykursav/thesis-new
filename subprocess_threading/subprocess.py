#!/usr/bin/env python2.7
# script by Alex Eames http://RasPi.tv/?p=7684
import time
from subprocess import call
from threading import Thread
import multiprocessing
from numpy import sum
 
cmd = "python luminance.py"
 
def get_average_luminance_of_block(block, N):
    '''luminance calculation block'''
##        blockpp = (block.__array_interface__['data'][0] + np.arange(block.shape[0]) * block.strides[0]).astype(np.uintp)
##        block_sum = libextraction.sum(blockpp, ctypes.c_int(self.N))
    #print block_sum
    
    return sum(block) / (N * N)

def process_thread(i):
    print "Thread: %d" % i
    
    start_time = time.time()
    call ([cmd], shell=True)
    end_time = time.time()
    elapsed_time = end_time - start_time
    print "Thread %s took %.2f seconds" % (i, elapsed_time)
 
how_many = int(raw_input("How many threads?\n>"))
 
for i in range(how_many):
    t = Thread(target=process_thread, args=(i,))
    t.start()