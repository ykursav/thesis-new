from preprocessing_offline import set_initials_pre, get_cropped
from extraction import set_initials, get_signature

from cv2 import VideoCapture

def initialize_set(image, counter):
    set_initials_pre(128, image, counter)
    image2 = get_cropped()
    #simwrite("resized_images/cropped" + str(counter) + ".jpg", image2)
    set_initials(16, 8, 128, image2)
    sigGen = get_signature()
    return sigGen



if __name__ == "__main__": 
    cap = VideoCapture("Videos/test2.mp4")
    f = open("signature_test6_new.bin", "wb")
    counter = 0
    while(cap.isOpened()):
        ret, frame = cap.read()
        if ret != True:
            break
	sigGen = initialize_set(frame, counter)
        f.write(sigGen.tobytes())
        counter += 1

    cap.release()
    f.close()

