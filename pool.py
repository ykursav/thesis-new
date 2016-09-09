from multiprocessing import Pool
import time


def f(i):
    return i**2

if __name__ == "__main__":
    st = time.time()
    p = Pool(5)
    results = p.map(f, [1,2,3])
    et = time.time()

    f(1)
    f(2)
    f(3)

    end = time.time()
    print str(et-st) + " " + str(end -et)
