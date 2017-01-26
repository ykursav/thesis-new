import picamera
import time

if __name__ == "__main__":
     camera = picamera.PiCamera()
     camera.iso = 800
     camera.awb_mode = 'off'
     camera.flash_mode = 'off'
     camera.exposure_mode = 'backlight'
     camera.image_effect = 'none'
     camera.meter_mode = 'average'
     camera.drc_strength = 'off'
     #camera.stereo_mode = 'none'
    
     camera.resolution = (544, 400)
     camera.framerate = 30
     camera.start_preview()
     time.sleep(5)
     camera.stop_preview()
