import numpy as np
import cv2
import picamera
from threading import Timer
import time
import io


# camera settings


class SignatureExtraction:
    def __init__(self, L, blur, hist_eq, N, M):
        self.L = L
        self.blur = blur
        self.hist_eq = hist_eq
        self.N = N
        self.M = M
        self.image = np.array([])

    def get_image(self):
        #http://picamera.readthedocs.org/en/latest/recipes1.html#capturing-to-a-file
        #Section 4.4 is used to get image from camera to keep in stream and set to image
        stream = io.BytesIO()
        with picamera.PiCamera() as camera:
            camera.resolution = (640, 480)
            camera.capture(stream, format = 'jpeg')

        data = np.fromstring(stream.getvalue(), dtype = np.uint8)
        self.image = cv2.imdecode(data, 0)
        return self.image
        


yunus = SignatureExtraction(5, False, False, 3, 5)
image = yunus.get_image()
cv2.imwrite('yunus'+'_captured.jpg',image) 
        
