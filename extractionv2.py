import cv2
import numpy as np

img_name1 = input("Please enter image name which will process for feature extraction: ")
img_name = img_name1 + ".jpg"
N = 8
M = 4
def img_center_crop(width, height, img):
   '''Resized image middle cropping 128 x 128'''
   if width != 128:
       if width%2 == 0:
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
   

def avg_luminance(I_block):
    '''luminance calculation block'''
    lum = np.sum(I_block)/N**2
    return lum   
    
def var_luminance(I_hist): 
    '''Variance of luminance calculation'''
    variance = np.sum((I_hist-avg_luminance(I_hist))**2)/N**2
    return variance 
    
def total_energy_block(I_block):
    '''Total energy of block 8 x 8'''
    flattened_block = []
    total_energy = 0
    
    for flat in I_block:
        flattened_block.extend(flat)
    
    for element in flattened_block:
        total_energy += element ** 2
    
    return total_energy
    
#def SVD():
    
    

def step_1(img_name):
    img = cv2.imread(img_name,0)
    if img is not None:
       height = len(img)
       width = len(img[0,:])
    else:
       print "Image is not readable"
    
  
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
    average_luminance = np.zeros((31,31,1))
    variance_hist = np.zeros((31,31,1))
    for y in range(0, 124, M):
        for x in range(0, 124,M):
        
            #Subdivision into blocks only for testing subdivided image output
            I_vis_blur[x*2:x*2+N,y*2:y*2+N] = I[x:x+N,y:y+N]  
            I_vis_hist[x*2:x*2+N,y*2:y*2+N] = I_e[x:x+N,y:y+N]  
            
            #blurred image subdivision to blocks
            I_block_blur[y/4,x/4,:] = I[x:x+N,y:y+N]  
            #Histogram equalized image subdivison into blocks
            I_block_hist[y/4,x/4,:] = I_e[x:x+N,y:y+N] 
            
            #average luminance
            average_luminance[y/4,x/4,:] = avg_luminance(I[x:x+N,y:y+N]) 
            
            #variance luminance for histogram equalized image
            variance_hist[y/4,x/4,:] = var_luminance(I_e[x:x+N,y:y+N])
    
    cv2.imwrite(img_name1+'_blocked_blur.jpg',I_vis_blur)
    cv2.imwrite(img_name1+'_blocked_hist.jpg',I_vis_hist) 
       

I,I_e = step_1(img_name)
step_2(I, I_e)
