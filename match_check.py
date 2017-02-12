from bitarray import bitarray
from preprocessing_match_check import get_cropped
from extraction import set_initials, get_signature
from matching import set_initials_match, signature_rejection, signature_scan, signature_deep_scan, signature_o2o
import cv2
#import io
import numpy as np


def initialize_set(image):
    global sigGen
    set_initials_pre(128, image, counter)
    crop = get_cropped()
    set_initials(8, 4, 128, crop)
    sig = bitarray()
    try:
        sig = get_signature()
    except:
        return
    
    set_initials_match(sig, 24, 38, 4, 28, 22)
    print signature_rejection()
        
    
    
    

if __name__ == "__main__":
    img = cv2.imread("test1.jpg", 0)
    initialize_set(img)



    
