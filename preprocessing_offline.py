from cv2 import resize, INTER_NEAREST, cvtColor, COLOR_BGR2GRAY, GaussianBlur
from numpy import floor, array

L = 0
image = array([])
counter_warped = 0
resized_image = array([])

def set_initials_pre(L_f, image_f, counter_warped_f):
    global L, image, counter_warped
    L = L_f
    image = image_f
    counter_warped = counter_warped_f
# class PreProcessing:
#     def __init__(self, L, hist_eq):
#         self.image = array([])
#         self.L = L
#         self.hist_eq = hist_eq
#         self.width = 0
#         self.height = 0
#         self.resized_image = array([])
#         self.warped = array([])

#@profile
def gray_image(image):
    return cvtColor(image, COLOR_BGR2GRAY)

    # def set_image(self, image):
    #     self.image = image
#@profile
def get_width_height(image):
    height, width = image.shape[:2]
    return [width, height]

#@profile
def get_scaled():
    global resized_image
    '''Scales image short edge to L value '''
    resized = resize(image, (544, 400))
    gray = gray_image(resized)
    warped = get_blurred(gray, 3)
    width = 544
    height = 400
    new_width = 0
    new_height = 0
    if height > width:
        new_height = int(floor(float(height) * (L / float(width))))
        new_width = L
    elif height < width:
        new_width = int(floor(float(width) * (L / float(height))))
        new_height = L
    elif height == width:
        new_width = L
        new_height = L
    resized_image = resize(warped, (new_width, new_height), \
    interpolation = INTER_NEAREST)
    #imwrite("resized_images/scaled" + str(counter_warped) + ".jpg", resized_image)

#@profile    
def get_cropped():
    '''Cropping image middle part L x L'''
    get_scaled()
    [width, height] = get_width_height(resized_image)
    if width != height:
        if width > height:
            if width % 2 == 0:
                crop_width = width / 2 - 1
                return resized_image[:, crop_width - L / 2:crop_width + L / 2]
            else:
                crop_width = width / 2 - 1
                return resized_image[:, crop_width - (L/ 2 - 1):crop_width + (L/ 2 + 1)]
        else:
            if height % 2 == 0:
                crop_height = height / 2 - 1
                return resized_image[crop_height - L / 2:crop_height + L / 2, :]
            else:
                crop_height = height / 2 - 1
                return resized_image[crop_height - (L/ 2 - 1):crop_height + (L/ 2 + 1), :]


def get_blurred(image, G):
    '''Blurring cropped image'''
    return GaussianBlur(image, (G, G), 0, 0)
