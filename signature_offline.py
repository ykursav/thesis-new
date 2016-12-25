from preprocessing_offline import set_initials_pre, get_cropped
from extraction import set_initials, get_signature
from matching import set_initials_match, signature_rejection
from cv2 import VideoCapture

def initialize_set(image, counter):
    set_initials_pre(128, image, counter)
    set_initials(8, 4, 128, get_cropped())
    sigGen = get_signature()
    return sigGen



if __name__ == "__main__": 
    cap = VideoCapture("Videos/Test1.mp4")
    f = open("signature_test1.bin", "wb")
    counter = 0
    while(cap.isOpened()):
        ret, frame = cap.read()
        if ret != True:
            break
	sigGen = initialize_set(frame, counter)
        print sigGen
        f.write(sigGen.tobytes())

    cap.release()
    f.close()

