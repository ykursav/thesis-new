import numpy as np
import math
import cv2

img_name = raw_input("Please enter image name which will process for feature extraction: ")
img_name += ".jpg"
image = 0
try:
    image = cv2.imread(img_name, 1)
except:
    print "ERROR: This image is not exist or unknown format."
height, width = image.shape[:2]
kernel = np.ones((5,5),np.uint8)
image = cv2.resize(image, (int(width * (500.0 / height)), 500), cv2.INTER_LINEAR)
orig = image.copy()
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
grad = cv2.morphologyEx(gray, cv2.MORPH_GRADIENT, kernel)
blur = cv2.medianBlur(grad, 5)
edged = cv2.Canny(blur, 0, 255)

__, cnts, __ = cv2.findContours(edged.copy(), cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
cnts = sorted(cnts, key = cv2.contourArea, reverse = True)[:5]
screenCnt = np.array([])
for c in cnts:
    peri = cv2.arcLength(c, True)
    approx = cv2.approxPolyDP(c, 0.02 * peri, True)

    if len(approx) == 4:
        screenCnt = approx
        break

cv2.drawContours(image, [screenCnt], -1, (0, 255, 0), 2)
cv2.imshow("Outline", image)
cv2.waitKey(0)
cv2.destroyAllWindows()