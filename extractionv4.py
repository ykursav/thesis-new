import numpy as np
import cv2



# camera settings


class SignatureExtraction:
    def __init__(self, image, N, M):
        self.N = N
        self.M = M
        # self.image = np.array([])
        self.image = image
        self.width = 0
        self.height = 0
        self.resized_image = np.array([])
        self.cropped_image = np.array([])
        self.cropped_blur = np.array([])
        self.image_blocks = np.array([])
        self.number_of_blocks = ((self.L - self.N) / self.M ) + 1
        self.block_all = np.zeros((self.number_of_blocks, self.number_of_blocks, self.N, self.N))
        self.average_luminance = np.zeros((self.number_of_blocks, self.number_of_blocks, 1))
        #irrelevant but used in experimentally or optional it will remove or toggle comment in future
        self.img_name = ""
        #self.hist_eq = np.array([])

    def get_blurred(self, image, G):
        '''Blurring cropped image'''
        image = cv2.GaussianBlur(image, (G, G), 0)
        return image

    def get_edges(self, image, G):
        screenCnt = 0
        height, width = image.shape[:2]
        image = cv2.resize(image, (int(width * (500.0 / height)), 500), cv2.INTER_LINEAR)
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        blur = self.get_blurred(gray, G)
        
        __, cnts, hierarchy = cv2.findContours(edge.copy(), cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
        cv2.namedWindow('image')
        def nothing(x):
            pass
        cnts = sorted(cnts, key = cv2.contourArea, reverse = True)
        cv2.createTrackbar('cnts','image',0, len(cnts) - 1,nothing)
        # lines = cv2.HoughLines(edge,1,np.pi/180,int(th))
        # print lines
        # for line in lines:
        #     for rho, theta in line:
        #         a = np.cos(theta)
        #         b = np.sin(theta)
        #         x0 = a*rho
        #         y0 = b*rho
        #         x1 = int(x0 + 1000*(-b))
        #         y1 = int(y0 + 1000*(a))
        #         x2 = int(x0 - 1000*(-b))
        #         y2 = int(y0 - 1000*(a))

        #         cv2.line(image,(x1,y1),(x2,y2),(0,0,255),2)
        while(1):
            cv2.imshow('image', image)
            epsilon = 0.05 * cv2.arcLength(cnts[cv2.getTrackbarPos('cnts','image')],True)
            approx = cv2.approxPolyDP(cnts[cv2.getTrackbarPos('cnts','image')], epsilon, True)
            #x,y,w,h = cv2.boundingRect(cnts[cv2.getTrackbarPos('cnts','image')])
            #cv2.rectangle(image,(x,y),(x+w,y+h),(0,255,0),2)
            k = cv2.waitKey(1) & 0xFF
            if k == 27:
                break
            cv2.drawContours(image, cnts[cv2.getTrackbarPos('cnts','image')], -1, (0, 255, 0), 2)

        cv2.destroyAllWindows()

        return edge



    def get_perspective(self):
        pass
    
    def get_width_height(self, image):
        self.height = len(image)
        self.width = len(image[0,:])

    # def get_image(self):
    #     '''This function is collecting image from picamera and
    #     keep this image as a opencv image'''
    #     #http://picamera.readthedocs.org/en/latest/recipes1.html#capturing-to-a-file
    #     #Section 4.4 is used to get image from camera to keep in stream and set to image
    #     #Unfinished function it will improve in future
    #     #There is a problem with camera warmup time because it will directly
    #     #connected with sync of the sound
    #     #in future version no need to return something it can be used as a internal method
    #     '''
    #     These lines for rpi
    #     '''
    #     # stream = io.bytesio()
    #     # with picamera.picamera() as camera:
    #     #     camera.resolution = (640, 480)
    #     #     camera.capture(stream, format = 'jpeg')
    #     #
    #     # data = np.fromstring(stream.getvalue(), dtype = np.uint8)
    #     # self.image = cv2.imdecode(data, 0)
    #     self.img_name = raw_input("Please enter image name which will process for feature extraction: ")
    #     self.img_name += ".jpg"
    #     try:
    #         self.image = cv2.imread(self.img_name,0)
    #         return self.image
    #     except:
    #         print "ERROR: This image is not exist or unknown format."

    # def get_image_name(self):
    #     return self.img_name



    def get_scaled(self):
        '''Scales image short edge to L value '''
        self.get_width_height(self.image)
        new_width = 0
        new_height = 0
        if self.height > self.width:
            new_height = int(np.floor(float(self.height) * (self.L / float(self.width))))
            new_width = self.L
        elif self.height < self.width:
            new_width = int(np.floor(float(self.width) * (self.L / float(self.height))))
            new_height = self.L
        elif self.height == self.width:
            new_width = self.L
            new_height = self.L
        self.resized_image = cv2.resize(self.image, (new_width, new_height), \
        interpolation = cv2.INTER_LINEAR)
        return self.resized_image

    def get_cropped(self):
       '''Cropping image middle part L x L'''
       self.get_width_height(self.resized_image)
       if self.width != self.height:
           if self.width > self.height:
               if self.width % 2 == 0:
                   crop_width = self.width / 2 - 1
                   self.cropped_image = self.resized_image[:, crop_width - self.L / 2:crop_width + self.L / 2]
               else:
                   crop_width = self.width / 2 - 1
                   self.cropped_image = self.resized_image[:, crop_width - (self.L/ 2 - 1):crop_width + (self.L/ 2 + 1)]
           else:
               if self.height % 2 == 0:
                   crop_height = self.height / 2 - 1
                   self.cropped_image = self.resized_image[crop_height - self.L / 2:crop_height + self.L / 2, :]
               else:
                   crop_height = self.height / 2 - 1
                   self.cropped_image = self.resized_image[crop_height - (self.L/ 2 - 1):crop_height + (self.L/ 2 + 1), :]

       return self.cropped_image


    
    #(optional area)
    # def get_hist_eq(self):
    #     '''Histogram equalization for cropped image'''
    #   self.hist_eq = cv2.equalizeHist(self.cropped_image)
    #     return self.hist_eq

    #check again it is correct or not
    def __get_average_luminance_of_block(self, block):
        '''luminance calculation block'''
        lum = np.sum(block) / self.N ** 2
        return lum  

    #check again it is correct or not
    # def var_luminance(I_hist): 
    # '''Variance of luminance calculation'''
    # variance = np.sum((I_hist-avg_luminance(I_hist))**2)/N**2
    # return variance 

    def __get_total_energy_of_block(self, block):
        block = block.flatten()
        total_energy = 0
        for element in block:
            total_energy += element ** 2

        return total_energy



    def get_blocks(self):
        '''Dividing cropped image N x N blocks by M overlapping'''
        self.cropped_blur =  self.get_blurred(self.cropped_image, 3)
        I_vis_blur_y = np.zeros((self.number_of_blocks * self.N, self.number_of_blocks * self.N))
        I_vis_blur_x = np.zeros((self.L, self.number_of_blocks * self.N))
        for x in range(0, self.L - self.M, self.M):
            I_vis_blur_x[:, x * 2:x * 2 + self.N] = self.cropped_blur[:, x:x + self.N]

        for y in range(0, self.L - self.M, self.M):
            I_vis_blur_y[y * 2:y * 2 + self.N, :] = I_vis_blur_x[y:y + self.N, :]

        #block numbering
        for x in range(0, self.number_of_blocks):
            for y in range(0, self.number_of_blocks):
                self.block_all[x, y, :] = I_vis_blur_y[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
                self.average_luminance[x, y, :] =  self.__get_average_luminance_of_block(I_vis_blur_y[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])


        return I_vis_blur_y







img_name = raw_input("Please enter image name which will process for feature extraction: ")
img_name += ".jpg"
image = 0
try:
    image = cv2.imread(img_name, 1)
except:
    print "ERROR: This image is not exist or unknown format."
    

yunus = SignatureExtraction(image, 128, False, 8, 4)

image1 = yunus.get_edges(image, 5)
image2 = yunus.get_scaled()
image3 = yunus.get_cropped()
# image4 = yunus.get_blurred()
#image5= yunus.get_hist_eq()
#image6 = yunus.get_blocks()
cv2.imwrite("output/" + img_name[0:-4] + '_edge.jpg', image1)
cv2.imwrite("output/" + img_name[0:-4] + '_scaled.jpg', image2)
cv2.imwrite("output/" + img_name[0:-4] + '_cropped.jpg', image3)
# cv2.imwrite("output/" + img_name[0:-4] + '_blurred.jpg', image4)
#cv2.imwrite("output/" + img_name[0:-4] + '_histogram.jpg', image5)
#cv2.imwrite("output/" + img_name[0:-4] + '_xblocks.jpg', image6)