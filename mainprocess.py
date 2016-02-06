import preprocessing as pre
import cv2

img_name = raw_input("Please enter image name which will process for feature extraction: ")
print img_name
img_name += ".jpg"
print img_name
image = 0
try:
    image = cv2.imread(img_name, 1)
except:
    print "ERROR: This image is not exist or unknown format."

yunus = pre.PreProcessing(image, 128, False)

points, image1 = yunus.get_contour(9)
warped = yunus.get_perspective(points)

image2 = yunus.get_scaled()
image3 = yunus.get_cropped()

cv2.imwrite("outputv2/" + img_name[0:-4] + '_scaled.jpg', image2)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_cropped.jpg', image3)
cv2.imwrite("outputv2/" + img_name[0:-4] + '_warped.jpg', warped)
