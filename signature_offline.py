from preprocessing_offline import set_initials_pre, get_cropped
from extraction import set_initials, get_signature
from bitarray import bitarray

from cv2 import VideoCapture

#@profile
def initialize_set(image, counter):
    set_initials_pre(128, image, counter)
    image2 = get_cropped()
    #simwrite("resized_images/cropped" + str(counter) + ".jpg", image2)
    set_initials(8, 4, 128, image2)
    sigGen = get_signature()
    return sigGen



if __name__ == "__main__": 
    cap = VideoCapture("ADAPTIVE_THRESHOLD_TESTS/test21_warp.avi")
    f = open("signature_test15.bin", "wb")
    counter = 0
    signature_counter = 0
    sig_first = bitarray()
    sig_second = bitarray()
    while(cap.isOpened()):
        ret, frame = cap.read()
        if ret != True:
            break
        sigGen = initialize_set(frame, counter)
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
        print counter
        counter += 1
    print counter
    cap.release()
    f.close()

