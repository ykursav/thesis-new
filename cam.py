from picamera import PiCamera
from picamera.array import PiRGBArray
import cv2
import time

camera = PiCamera()
camera.resolution = (544, 400)
rawCapture = PiRGBArray(camera, size = (544, 400))
camera.start_preview()
time.sleep(5)


counter = 0

for x in range(0, 10):
    camera.capture(rawCapture, use_video_port = True, format = "bgr")
    image = rawCapture.array
    cv2.imwrite("deneme" + str(x)  + ".jpg", image)
    rawCapture.truncate(0)
