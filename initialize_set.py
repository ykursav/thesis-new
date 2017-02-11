from PiVideoStream import PiVideoStream
import time
from preprocessing import set_initials_pre, get_contour, get_perspective, get_cropped
from extraction import set_initials, get_signature
from matching import set_initials_match, signature_rejection, signature_scan, signature_deep_scan, signature_o2o
from bitarray import bitarray
import logging


class InitializeSet:
    def __init__(self, resolution=(544,400), framerate=32):
        fourcc = cv2.VideoWriter_fourcc('X','V','I','D')
        self.out2 = cv2.VideoWriter("ADAPTIVE_THRESHOLD_TESTS/" + args["video2_name"], fourcc, 5.0, (500, 300))
        self.vs = PiVideoStream().start()
        time.sleep(2)
        self.logging = logging.basicConfig(filename="debug_logs/" + args["file_name"], level = logging.DEBUG)
        self.counter = 0
        self.sigGen = bitarray()
        self.set_initials_pre = set_initials_pre
        self.get_contour = get_contour
        self.get_perspective = get_perspective
        self.get_cropped = get_cropped
        self.set_initials = set_initials
        self.get_signature = get_signature
        self.set_initials_match
        self.signature_o2o = signature_o2o
        self.stopped = False


    def start(self):
        Thread(target=self.update, args=()).start()
        return self

    def update(self):
        while(True):
            set_initials_pre(128, self.vs.read(), self.counter, self.out2)
            check = self.get_perspective(self.get_contour(5), 0)
            if check == 10:
                self.counter -= 1
                continue
            elif check == 20:
                self.logging.debug("Too small detection probably wrong")
                self.counter -= 1
                continue
            self.set_initials(8, 4, self.get_cropped())
            try:
                self.sigGen = self.get_signature()
            except:
                self.logging.debug("Nonetype")
                self.counter -= 1
                continue
            if self.stopped:
                self.vs.stop()
                return


    def get_signature(self):
        return self.sigGen

    def stop(self):
        self.stopped = True
