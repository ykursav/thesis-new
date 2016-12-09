from multiprocessing import Pipe, Process
from threading import Thread
from multiprocessing import cpu_count
import time


def f(i):
    return i**2
block1 = [[1 for col in range(1000)] for row in range(1000)]
block2 = [[2 for col in range(1000)] for row in range(1000)]
block3 = [[3 for col in range(1000)] for row in range(1000)]
block4 = [[4 for col in range(1000)] for row in range(1000)]
def luminance_t(block, conn):
    summation = 0
    for elements in block:
        summation += elements
    conn.send(summation)
    conn.close()

def luminance(block):
    summation = 0
    for elements in block:
        for element in elements:
            summation += element
    return summation / (8 * 8)

if __name__ == "__main__":
    st = time.time()
    #p = ThreadPool(processes=4)
    #results = p.map(f, [1,2,3])
    process = []
    results = []
    for list_b in block1:
        #print(list_b)
        parent_conn, child_conn = Pipe()
        p = Process(target = luminance_t, args = (list_b, child_conn,))
        p.start()
        process.append(p)
        results.append(parent_conn.recv())
    for p in process:
        p.join()
    et = time.time()
    luminance(block1)
    luminance(block2)
    luminance(block3)
    luminance(block4)
    end = time.time()
    print(str(et-st) + " " + str(end -et))
