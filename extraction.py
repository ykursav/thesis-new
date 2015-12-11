import cv2
import numpy as np

img_name1 = input("Please enter image name which will process for feature extraction: ")
img_name = img_name1 + ".jpg"

def img_center_crop(width, height, img):
   if width != 128:
       if width%2==0:
           crop_width = width/2-1
           img = img[:,crop_width-64:crop_width+64]
       else:
           crop_width = width/2-1
           img = img[:,crop_width-63:crop_width+65]
   elif height != 128:
       if height%2==0:
           crop_height = height/2-1
           img = img[crop_height-64:crop_height+64,:]
       else:
           crop_height = height/2-1
           img = img[crop_height-63:crop_height+65,:]
   return img


def step_1(img_name):
    img = cv2.imread(img_name,0)
    height = len(img)
    width = len(img[0,:])
  
    if height > width:
        new_height = int(np.floor(float(height)*(128.0/width)))
        new_width = 128
    elif width > height: 
        new_width = int(np.floor(float(width)*(128.0/height)))
        new_height = 128
    elif width == height:
        new_width = 128
        new_height = 128
    
    res1 = cv2.resize(img, (new_width, new_height))
    centered = img_center_crop(new_width,new_height,res1)
    
    I = cv2.blur(centered,(3,3))
    I_e = cv2.equalizeHist(centered)
    cv2.imwrite(img_name1+'_resized.jpg',res1) 
    cv2.imwrite(img_name1+'_centered.jpg',centered)
    cv2.imwrite(img_name1+'_eqhist.jpg',I_e) 
    cv2.imwrite(img_name1+'_blurred.jpg',I)    
    return I, I_e 

def step_2(I,I_e):
    I_block_blur = np.zeros((31,31,8,8))
    I_block_hist = np.zeros((31,31,8,8))
    I_vis_blur = np.zeros((248,248))
    I_vis_hist = np.zeros((248,248))
    N = 8
    M = 4
    for y in range(0, 124, M):
        for x in range(0, 124,M):
            I_vis_blur[x*2:x*2+8,y*2:y*2+8] = I[x:x+N,y:y+N]  
            I_vis_hist[x*2:x*2+8,y*2:y*2+8] = I_e[x:x+N,y:y+N]  
            I_block_blur[y/4,x/4,:] = I[x:x+N,y:y+N]  
            I_block_hist[y/4,x/4,:] = I_e[x:x+N,y:y+N] 
    
    cv2.imwrite(img_name1+'_blocked_blur.jpg',I_vis_blur)
    cv2.imwrite(img_name1+'_blocked_hist.jpg',I_vis_hist) 
              

I,I_e = step_1(img_name)
step_2(I, I_e)