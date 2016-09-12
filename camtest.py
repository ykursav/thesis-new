import python-picamera
import time

with picamera.PiCamera() as camera:
    camera.resolution = (544, 400)
    #camera.contrast = -100
    #camera.brightness = 50
    #camera.awb_mode = "auto"
    ##camera.sharpness = 40
##    camera.saturation = -100
    camera.start_preview()
    time.sleep(5)
    camera.capture('master-thesis/flash1.jpg')
