from multiprocessing import Pool
import time
import numpy as np


def f(i):
    return i**2
block1 = [[1 for col in range(10000)] for row in range(10000)]
block2 = [[2 for col in range(10)] for row in range(10)]
block3 = [[3 for col in range(10)] for row in range(10)]
block4 = [[4 for col in range(10)] for row in range(10)]
def luminance(block):
    summation = 0
    for elements in block:
        for element in elements:
            summation += element
    return summation / (8 * 8)

if __name__ == "__main__":
    
    st = time.time()
    p = Pool(4)
    #results = p.map(f, [1,2,3])
    results = p.map(luminance, [block1[0:2], block1[2:4], block1[4:6], block1[6:8]])
    et = time.time()
    luminance(block1)
    end = time.time()
    print str(et-st) + " " + str(end -et)
