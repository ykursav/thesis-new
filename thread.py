import time

from subprocess import call
from threading import Thread, active_count

cmd = "python /home/pi/Desktop/master-thesis/mainprocess.py"

def process_thread(i):
    call([cmd], shell=True)


if __name__ == "__main__":
    start = time.time()
    for i in range(8):
        t = Thread(target = process_thread, args = (i,))
        t.start()
        time.sleep(0.1)

    print "reached zero"
    end = time.time()
    print end - start

    
