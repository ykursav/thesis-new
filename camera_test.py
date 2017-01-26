import picamera
import time

if __name__ == "__main__":
     exposure_modes = {0:'off', 1:'auto', 2:'night', 3:'nightpreview', 4:'backlight', 5:'spotlight', \
     6:'sport', 7:'snow', 8:'beach', 9:'verylong', 10:'fixedfps', 11:'antishake', 12:'fireworks'}
     awb_modes = {0:'off', 1:'auto', 2:'sunlight', 3:'cloudy', 4:'shade', 5:'tungsten', \
     6:'fluorescent', 7:'incandescent', 8:'flash', 9:'horizon'}
     flash_modes = {0:'off', 1:'auto', 2:'on', 3:'redeye', 4:'fillin', 5:'torch'}
     image_effect = {0:'none', 1:'negative', 2:'solarize', 3:'denoise', 4:'film', 5:'blur', \
     6:'saturation',7:'colorswap',8:'colorpoint', 9:'colorbalance', 10:'deinterlace1', 11:'deinterlace2'}
     meter_modes = {0:'average', 1:'spot', 2:'backlit', 3:'matrix'}
     drc_strengths = {0:'off', 1:'low', 2:'medium', 3:'high'}
     camera = picamera.PiCamera()
     camera.iso = 800
     camera.awb_mode = 'off'
     camera.flash_mode = 'off'
     camera.exposure_mode = 'off'
     camera.image_effect = 'none'
     camera.meter_mode = 'average'
     camera.drc_strength = 'off'
    
     camera.resolution = (544, 400)
     camera.framerate = 30
     #camera.start_preview()
     time.sleep(2)
     counter = 0
     for key in exposure_modes:
          camera.exposure_mode = exposure_modes[key]
          for key in awb_modes:
               camera.awb_mode = awb_modes[key]
               for key in flash_modes:
                    camera.flash_mode = flash_modes[key]
                    for key in image_effect:
                         camera.image_effect = image_effect[key]
                         for key in meter_modes:
                              camera.meter_mode = meter_modes[key]
                              for key in drc_strengths:
                                   camera.drc_strength = drc_strengths[key]
                                   frame = camera.capture("cam_test/output_test_" + str(counter) + "_" + exposure_modes[key] + "_" +  awb_modes[key] + \
                                        "_" + flash_modes[key]  + "_" +  image_effect[key]  + "_" +  meter_modes[key]  + "_" +  drc_strengths[key] + ".jpeg")
