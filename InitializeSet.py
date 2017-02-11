from PiVideoStream import PiVideoStream
import time
from preprocessing import set_initials_pre, get_contour, get_perspective, get_cropped
from extraction import set_initials, get_signature
from bitarray import bitarray
import logging
from threading import Thread
import cv2

#@profile
class InitializeSet:
    @profile
    def __init__(self):
        fourcc = cv2.VideoWriter_fourcc('X','V','I','D')
        self.out2 = cv2.VideoWriter("ADAPTIVE_THRESHOLD_TESTS/example2.avi", fourcc, 5.0, (500, 300))
        self.vs = PiVideoStream().start()
        time.sleep(2)
        #self.logging = logging
        self.counter = 0
        self.sigGen = bitarray()
        self.set_initials_pre = set_initials_pre
        self.get_contour = get_contour
        self.get_perspective = get_perspective
        self.get_cropped = get_cropped
        self.set_initials = set_initials
        self.get_signature = get_signature
        self.stopped = False

    @profile
    def start(self):
        Thread(target=self.update, args=()).start()
        return self

    @profile
    def update(self):
        while(True):
            start = time.time()
            self.set_initials_pre(128, self.vs.read(), self.counter, self.out2)
            check = self.get_perspective(self.get_contour(5), 0)
            if check == 10:
                self.counter -= 1
                continue
            elif check == 20:
                logging.debug("Too small detection probably wrong")
                self.counter -= 1
                continue

            self.set_initials(8, 4, 128, self.get_cropped())

            try:
                self.sigGen = self.get_signature()
                end = time.time()
                logging.debug("Total time:" + str(end-start))
            except:
                logging.debug("Nonetype")
                self.counter -= 1
                continue
            if self.stopped:
                self.vs.stop()
                return

    @profile
    def send_signature(self):
        return self.sigGen
    @profile
    def stop(self):
        self.stopped = True
    @profile
    def get_counter(self):
        return self.counter
