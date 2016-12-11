import numpy as np
import time

list1 = np.ones(8) * 1
list2 = np.ones(8) * 2
list3 = np.ones(8) * 3
list4 = np.ones(8) * 4
list5 = np.ones(8) * 5
list6 = np.ones(8) * 6
list7 = np.ones(8) * 7
list8 = np.ones(8) * 8
block1 = np.ones([8,8]) * 9

def luminance(listoflist):
    return sum(listoflist) / (8 * 8)

def luminance_bl(block):
    return np.sum(block) / (8 * 8)
start = time.time()
for x in range(100000):
    luminance(block1)
end  = time.time()
for x in range(100000):
    luminance_bl(block1)
endd = time.time()

print(str(end-start) + "and" + str(endd-end))
