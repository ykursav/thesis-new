from preprocessing_offline_match import set_initials_pre, get_cropped
from extraction import set_initials, get_signature
from bitarray import bitarray

import cv2
#@profile
def initialize_set(image, counter):
    set_initials_pre(128, image)
    image2 = get_cropped()
    #simwrite("resized_images/cropped" + str(counter) + ".jpg", image2)
    set_initials(8, 4, 128, image2)
    sigGen = get_signature()
    return sigGen



if __name__ == "__main__": 
    img = cv2.imread("test1.jpg", 0)
    f = open("match.bin", "wb")
    counter = 0
    signature_counter = 0
    sig_first = bitarray()
    sig_second = bitarray()

    sigGen = initialize_set(img, counter)
    f.write(sigGen.tobytes())
    f.close()

