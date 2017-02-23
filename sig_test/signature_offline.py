from extraction import set_initials, get_signature
from bitarray import bitarray, bitdiff

from cv2 import VideoCapture, VideoWriter, VideoWriter_fourcc, imread

#@profile
def initialize_set(image):
    #simwrite("resized_images/cropped" + str(counter) + ".jpg", image2)
    set_initials(8, 4, 128, image)
    sigGen = get_signature()
    return sigGen



if __name__ == "__main__": 
    cap = imread("cropped_90.jpg", 0)
    cap1 = imread("cropped_blocked.jpg", 0)
    f = open("signature_test05.bin", "wb")
    sig_first = bitarray()
    sig_second = bitarray()
    sigGen = initialize_set(cap)
    sigGen1 = initialize_set(cap1)
    print sigGen
    print sigGen1
    print bitdiff(sigGen, sigGen1)
    f.write(sigGen.tobytes())
        #if signature_counter == 0:
        #    sigGen = initialize_set(frame, counter)
        #    sig_first = sigGen
        #    signature_counter += 1
        #else:
        #    sigGen = initialize_set(frame, counter)
        #    sig_second = sigGen
        #    signature_res = sig_first and sig_second
            #print len(signature_res)
            #print signature_res
        #    f.write(signature_res.tobytes())
        #   signature_counter = 0

    f.close()

