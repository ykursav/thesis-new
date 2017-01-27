import picamera
import picamera.array
import time
import threading
from cv2 import imwrite

def camera_update(camera, awb, exposure):
     camera.exposure_mode = exposure
     camera.awb_mode = awb
     #camera.flash_mode = flash
     #camera.image_effect = effect
     #camera.meter_mode = meter
     #camera.drc_strength = drc


if __name__ == "__main__":
     exposure_modes = {0:'off', 1:'auto', 2:'night', 3:'nightpreview', 4:'backlight', 5:'spotlight', \
     6:'sports', 7:'snow', 8:'beach', 9:'verylong', 10:'fixedfps', 11:'antishake', 12:'fireworks'}
     awb_modes = {0:'off', 1:'auto', 2:'sunlight', 3:'cloudy', 4:'shade', 5:'tungsten', \
     6:'fluorescent', 7:'incandescent', 8:'flash', 9:'horizon'}
     flash_modes = {0:'off', 1:'auto', 2:'on', 3:'redeye', 4:'fillin', 5:'torch'}
     image_effect = {0:'none', 1:'negative', 2:'solarize', 3:'denoise', 4:'film', 5:'blur', \
     6:'saturation',7:'colorswap',8:'colorpoint', 9:'colorbalance', 10:'deinterlace1', 11:'deinterlace2'}
     meter_modes = {0:'average', 1:'spot', 2:'backlit', 3:'matrix'}
     drc_strengths = {0:'off', 1:'low', 2:'medium', 3:'high'}
     camera = picamera.PiCamera()
     camera.iso = 800
     #camera.awb_mode = 'off'
     #camera.flash_mode = 'off'
     #camera.exposure_mode = 'off'
     #camera.image_effect = 'none'
     #camera.meter_mode = 'average'
     #camera.drc_strength = 'off'
     #rawCapture = picamera.array.PiRGBArray(camera)
     #stream = camera.capture_continuous(rawCapture, format = 'bgr', use_video_port = True)
     camera.resolution = (544, 400)
     camera.framerate = 30
     camera.start_preview()
     time.sleep(2)
     counter = 0
     for key in exposure_modes:
          for key2 in awb_modes:
               #print awb_modes[key2]
               #for key in flash_modes:
                    #for key in image_effect:
                         #for key in meter_modes:
                              #for key in drc_strengths:
               camera_update(camera, awb_modes[key2], exposure_modes[key])
               #camera.capture("cam_test/output_test_" + str(counter) + "_" + exposure_modes[key] + "_" +  awb_modes[key] + \
               #    "_" + flash_modes[key]  + "_" +  image_effect[key]  + "_" +  meter_modes[key]  + "_" +  drc_strengths[key] + ".jpeg")
               camera.capture("cam_test/output_test_dark_dark_" + str(counter) + "_" + exposure_modes[key] + "_" + awb_modes[key2] + ".jpeg")
               counter += 1
               print counter
               #print exposure_modes[key]
               #print awb_modes[key2]

     camera.stop_preview()
