import numpy as np
import cv2
from bitarray import bitarray



# camera settings


class SignatureExtraction:
    '''N block size, M overlapping pixels, L image size'''
    def __init__(self, image, N, M, L):
        self.L = L
        self.N = N
        self.M = M
        # self.image = np.array([])
        self.image = image
        self.width = 0
        self.height = 0
        self.image_blocks = np.array([])
        self.number_of_blocks = ((self.L - self.N) / self.M ) + 1
        self.block_all = np.zeros((self.number_of_blocks, self.number_of_blocks, self.N, self.N))
        self.average_luminance = np.zeros((self.number_of_blocks, self.number_of_blocks, 1))
        #irrelevant but used in experimentally or optional it will remove or toggle comment in future
        self.img_name = ""
        #self.hist_eq = np.array([])


    
    def get_width_height(self, image):
        self.height = len(image)
        self.width = len(image[0,:])




    
    #(optional area)
    # def get_hist_eq(self):
    #     '''Histogram equalization for cropped image'''
    #   self.hist_eq = cv2.equalizeHist(self.cropped_image)
    #     return self.hist_eq

    #check again it is correct or not

    def get_average_luminance_of_block(self, block):
        '''luminance calculation block'''
        lum = np.sum(block) / self.N ** 2
        return lum  

    # check again it is correct or not
    # def var_luminance(self, block): 
    # '''Variance of luminance calculation'''
    #     for line in block:
    #         for y in line:

    #     variance = np.sum((block - self.get_average_luminance_of_block(block))**2) / self.N ** 2
    #     return variance 

    def get_total_energy_of_block(self, block):
        block = block.flatten()
        total_energy = 0
        for element in block:
            total_energy += element ** 2

        return total_energy

    def get_second_singular(self, block):
        U, s, V = np.linalg.svd(block)
        return s[1] ** 2


    def get_blocks(self):
        '''Dividing cropped image N x N blocks by M overlapping'''
        I_vis_blur_y = np.zeros((self.number_of_blocks * self.N, self.number_of_blocks * self.N))
        I_vis_blur_x = np.zeros((self.L, self.number_of_blocks * self.N))
        for x in range(0, self.L - self.M, self.M):
            I_vis_blur_x[:, x * 2:x * 2 + self.N] = self.image[:, x:x + self.N]

        for y in range(0, self.L - self.M, self.M):
            I_vis_blur_y[y * 2:y * 2 + self.N, :] = I_vis_blur_x[y:y + self.N, :]

        #block numbering
        # for x in range(0, self.number_of_blocks):
        #     for y in range(0, self.number_of_blocks):
        #         self.block_all[x, y, :] = I_vis_blur_y[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        #         #self.average_luminance[x, y, :] =  self.__get_average_luminance_of_block(I_vis_blur_y[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])


        return I_vis_blur_y

    def basic_rotations(self, image):
        center = (self.N * self.number_of_blocks) / 2
        M1 = cv2.getRotationMatrix2D((center, center), 90, 1)
        M2 = cv2.getRotationMatrix2D((center, center), 180, 1)
        M3 = cv2.getRotationMatrix2D((center, center), 270, 1)
        rot90 = cv2.warpAffine(image, M1, (center * 2, center * 2))
        rot180 = cv2.warpAffine(image, M2, (center * 2, center * 2))
        rot270 = cv2.warpAffine(image, M3, (center * 2, center * 2))

        return rot90, rot180, rot270

    def get_luminance(self, rot0, rot90, rot180, rot270, x, y, only_rotate):
        group = np.zeros((8, 64))
        group[:, 0:8] = rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]

        group[:, 8:16] = rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        group[:, 16:24] = rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        group[:, 24:32] = rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]

        lum1 = self.get_average_luminance_of_block(group[:, 0:8])
        lum2 = self.get_average_luminance_of_block(group[:, 8:16])
        lum3 = self.get_average_luminance_of_block(group[:, 16:24])
        lum4 = self.get_average_luminance_of_block(group[:, 24:32])


        if only_rotate == 1:
            avg_lum = (lum1 + lum2 + lum3 + lum4) / 4

            return avg_lum
        elif only_rotate == -1:
            avg_lum = lum1

            return avg_lum
        else:
            group[:, 32:40] = cv2.flip(group[:, 24:32], 1)
            group[:, 40:48] = cv2.flip(group[:, 8:16], 1)
            group[:, 48:56] = cv2.flip(group[:, 16:24], 0)
            group[:, 56:64] = cv2.flip(group[:, 0:8], 0)

            lum5 = self.get_average_luminance_of_block(group[:, 32:40])
            lum6 = self.get_average_luminance_of_block(group[:, 40:48])
            lum7 = self.get_average_luminance_of_block(group[:, 48:56])
            lum8 = self.get_average_luminance_of_block(group[:, 56:64])

            avg_lum = (lum1 + lum2 + lum3 + lum4 + lum5 + lum6 + lum7+ lum8) / 8


            return avg_lum


    def get_std_lum(self, rot0, rot90, rot180, rot270, x, y, only_rotate):
        group = np.zeros((8, 64))
        group[:, 0:8] = rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        # group[:, 8:16] = rot90[(30 - x) * 8:(30 - x) * 8 + self.N, y * 8:y * 8 + self.N]
        # group[:, 16:24] = rot180[(30 - y) * 8:(30 - y) * 8 + self.N, (30 - x) * 8:(30 - x) * 8 + self.N]
        # group[:, 24:32] = rot270[x * 8:x * 8 + self.N, (30 - y) * 8:(30 - y) * 8 + self.N]
        group[:, 8:16] = rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        group[:, 16:24] = rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        group[:, 24:32] = rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]

        lum1 = self.get_average_luminance_of_block(group[:, 0:8])
        lum2 = self.get_average_luminance_of_block(group[:, 8:16])
        lum3 = self.get_average_luminance_of_block(group[:, 16:24])
        lum4 = self.get_average_luminance_of_block(group[:, 24:32])

        if only_rotate == 1:
            std_lum = np.std(np.array([lum1, lum2, lum3, lum4]))

            return std_lum
        elif only_rotate == -1:
            std_lum = 0

            return std_lum
        else:
            group[:, 32:40] = cv2.flip(group[:, 24:32], 1)
            group[:, 40:48] = cv2.flip(group[:, 8:16], 1)
            group[:, 48:56] = cv2.flip(group[:, 16:24], 0)
            group[:, 56:64] = cv2.flip(group[:, 0:8], 0)

            lum5 = self.get_average_luminance_of_block(group[:, 32:40])
            lum6 = self.get_average_luminance_of_block(group[:, 40:48])
            lum7 = self.get_average_luminance_of_block(group[:, 48:56])
            lum8 = self.get_average_luminance_of_block(group[:, 56:64])

            std_lum = np.std(np.array([lum1, lum2, lum3, lum4, lum5, lum6, lum7, lum8]))


            return std_lum

    def get_avg_sing(self, rot0, rot90, rot180, rot270, x, y, only_rotate):
        group = np.zeros((8, 64))
        group[:, 0:8] = rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        # group[:, 8:16] = rot90[(30 - x) * 8:(30 - x) * 8 + self.N, y * 8:y * 8 + self.N]
        # group[:, 16:24] = rot180[(30 - y) * 8:(30 - y) * 8 + self.N, (30 - x) * 8:(30 - x) * 8 + self.N]
        # group[:, 24:32] = rot270[x * 8:x * 8 + self.N, (30 - y) * 8:(30 - y) * 8 + self.N]
        group[:, 8:16] = rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        group[:, 16:24] = rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        group[:, 24:32] = rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]

        sing1 = self.get_singular_energy(group[:, 0:8])
        sing2 = self.get_singular_energy(group[:, 8:16])
        sing3 = self.get_singular_energy(group[:, 16:24])
        sing4 = self.get_singular_energy(group[:, 24:32])

        if only_rotate == 1:
            avg_sing = (sing1 + sing2 + sing3 + sing4) / 4

            return avg_sing
        elif only_rotate == -1:
            avg_sing = sing1

            return avg_sing
        else:
            group[:, 32:40] = cv2.flip(group[:, 24:32], 1)
            group[:, 40:48] = cv2.flip(group[:, 8:16], 1)
            group[:, 48:56] = cv2.flip(group[:, 16:24], 0)
            group[:, 56:64] = cv2.flip(group[:, 0:8], 0)

            sing5 = self.get_singular_energy(group[:, 32:40])
            sing6 = self.get_singular_energy(group[:, 40:48])
            sing7 = self.get_singular_energy(group[:, 48:56])
            sing8 = self.get_singular_energy(group[:, 56:64])

            avg_sing = (sing1 + sing2 + sing3 + sing4 + sing5 + sing6 + sing7 + sing8) / 8

            return avg_sing

    def get_std_sing(self, rot0, rot90, rot180, rot270, x, y, only_rotate):
        group = np.zeros((8, 64))
        group[:, 0:8] = rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        # group[:, 8:16] = rot90[(30 - x) * 8:(30 - x) * 8 + self.N, y * 8:y * 8 + self.N]
        # group[:, 16:24] = rot180[(30 - y) * 8:(30 - y) * 8 + self.N, (30 - x) * 8:(30 - x) * 8 + self.N]
        # group[:, 24:32] = rot270[x * 8:x * 8 + self.N, (30 - y) * 8:(30 - y) * 8 + self.N]
        group[:, 8:16] = rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        group[:, 16:24] = rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        group[:, 24:32] = rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]

        sing1 = self.get_singular_energy(group[:, 0:8])
        sing2 = self.get_singular_energy(group[:, 8:16])
        sing3 = self.get_singular_energy(group[:, 16:24])
        sing4 = self.get_singular_energy(group[:, 24:32])

        if only_rotate == 1:
            std_sing = np.std(np.array([sing1, sing2, sing3, sing4]))

            return std_sing
        elif only_rotate == -1:
            std_sing = 0

            return std_sing
        else:
            group[:, 32:40] = cv2.flip(group[:, 24:32], 1)
            group[:, 40:48] = cv2.flip(group[:, 8:16], 1)
            group[:, 48:56] = cv2.flip(group[:, 16:24], 0)
            group[:, 56:64] = cv2.flip(group[:, 0:8], 0)

            sing5 = self.get_singular_energy(group[:, 32:40])
            sing6 = self.get_singular_energy(group[:, 40:48])
            sing7 = self.get_singular_energy(group[:, 48:56])
            sing8 = self.get_singular_energy(group[:, 56:64])

            std_sing = np.std(np.array([sing1, sing2, sing3, sing4, sing5, sing6, sing7, sing8]))

            return std_sing

    def get_fragment(self, rot0, rot90, rot180, rot270, x, y, only_rotate):
        group = np.zeros((8, 64))
        group[:, 0:8] = rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        # group[:, 8:16] = rot90[(30 - x) * 8:(30 - x) * 8 + self.N, y * 8:y * 8 + self.N]
        # group[:, 16:24] = rot180[(30 - y) * 8:(30 - y) * 8 + self.N, (30 - x) * 8:(30 - x) * 8 + self.N]
        # group[:, 24:32] = rot270[x * 8:x * 8 + self.N, (30 - y) * 8:(30 - y) * 8 + self.N]
        group[:, 8:16] = rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        group[:, 16:24] = rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
        group[:, 24:32] = rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]

        lum1 = self.get_average_luminance_of_block(group[:, 0:8])
        lum2 = self.get_average_luminance_of_block(group[:, 8:16])
        lum3 = self.get_average_luminance_of_block(group[:, 16:24])
        lum4 = self.get_average_luminance_of_block(group[:, 24:32])

        sing1 = self.get_singular_energy(group[:, 0:8])
        sing2 = self.get_singular_energy(group[:, 8:16])
        sing3 = self.get_singular_energy(group[:, 16:24])
        sing4 = self.get_singular_energy(group[:, 24:32])

        if only_rotate == 1:
            avg_lum = (lum1 + lum2 + lum3 + lum4) / 4
            std_lum = np.std(np.array([lum1, lum2, lum3, lum4]))

            avg_sing = (sing1 + sing2 + sing3 + sing4) / 4
            std_sing = np.std(np.array([sing1, sing2, sing3, sing4]))

            return avg_lum, std_lum, avg_sing, std_sing
        elif only_rotate == -1:
            avg_lum = lum1
            std_lum = 0

            avg_sing = sing1
            std_sing = 0

            return avg_lum, std_lum, avg_sing, std_sing
        else:
            group[:, 32:40] = cv2.flip(group[:, 24:32], 1)
            group[:, 40:48] = cv2.flip(group[:, 8:16], 1)
            group[:, 48:56] = cv2.flip(group[:, 16:24], 0)
            group[:, 56:64] = cv2.flip(group[:, 0:8], 0)

            lum5 = self.get_average_luminance_of_block(group[:, 32:40])
            lum6 = self.get_average_luminance_of_block(group[:, 40:48])
            lum7 = self.get_average_luminance_of_block(group[:, 48:56])
            lum8 = self.get_average_luminance_of_block(group[:, 56:64])

            sing5 = self.get_singular_energy(group[:, 32:40])
            sing6 = self.get_singular_energy(group[:, 40:48])
            sing7 = self.get_singular_energy(group[:, 48:56])
            sing8 = self.get_singular_energy(group[:, 56:64])

            avg_lum = (lum1 + lum2 + lum3 + lum4 + lum5 + lum6 + lum7+ lum8) / 8
            std_lum = np.std(np.array([lum1, lum2, lum3, lum4, lum5, lum6, lum7, lum8]))

            avg_sing = (sing1 + sing2 + sing3 + sing4 + sing5 + sing6 + sing7 + sing8) / 8
            std_sing = np.std(np.array([sing1, sing2, sing3, sing4, sing5, sing6, sing7, sing8]))

            return avg_lum, std_lum, avg_sing, std_sing

    def get_all_fragments(self):
        avg_lum_list = []
        avg_sing_list = []
        std_lum_list = []
        std_sing_list = []
        rot0 = self.get_blocks()
        rot90, rot180, rot270 = self.basic_rotations(rot0)
        for y in range(0, 15):
            for x in range(y, 15):
                if x == y or x == 14:
                    if x == 14 and y == 14:
                        # avg_lum = multiprocessing.Process(target=extract_process.get_luminance(rot0, rot90, rot180, rot270, x, y, -1))
                        # std_lum = multiprocessing.Process(target=extract_process.get_std_lum(rot0, rot90, rot180, rot270, x, y, -1))
                        # avg_sing = multiprocessing.Process(target=extract_process.get_avg_sing(rot0, rot90, rot180, rot270, x, y, -1))
                        # std_sing = multiprocessing.Process(target=extract_process.get_std_sing(rot0, rot90, rot180, rot270, x, y, -1))
                        avg_lum, std_lum, avg_sing, std_sing = self.get_fragment(rot0, rot90, rot180, rot270, x, y, -1)
                        avg_lum_list.append(avg_lum)
                        avg_sing_list.append(avg_sing)
                        std_lum_list.append(std_lum)
                        std_sing_list.append(std_sing)
                        # avg_lum_list.append(avg_lum)
                        # avg_sing_list.append(avg_sing)
                        # std_lum_list.append(std_lum)
                        # std_sing_list.append(std_sing)
                    else:
                        # avg_lum = multiprocessing.Process(target=extract_process.get_luminance(rot0, rot90, rot180, rot270, x, y, 1))
                        # std_lum = multiprocessing.Process(target=extract_process.get_std_lum(rot0, rot90, rot180, rot270, x, y, 1))
                        # avg_sing = multiprocessing.Process(target=extract_process.get_avg_sing(rot0, rot90, rot180, rot270, x, y, 1))
                        # std_sing = multiprocessing.Process(target=extract_process.get_std_sing(rot0, rot90, rot180, rot270, x, y, 1))
                        avg_lum, std_lum, avg_sing, std_sing = self.get_fragment(rot0, rot90, rot180, rot270, x, y, 1)
                        avg_lum_list.append(avg_lum)
                        avg_sing_list.append(avg_sing)
                        std_lum_list.append(std_lum)
                        std_sing_list.append(std_sing)
                else:
                    # avg_lum = multiprocessing.Process(target=extract_process.get_luminance(rot0, rot90, rot180, rot270, x, y, 0))
                    # std_lum = multiprocessing.Process(target=extract_process.get_std_lum(rot0, rot90, rot180, rot270, x, y, 0))
                    # avg_sing = multiprocessing.Process(target=extract_process.get_avg_sing(rot0, rot90, rot180, rot270, x, y, 0))
                    # std_sing = multiprocessing.Process(target=extract_process.get_std_sing(rot0, rot90, rot180, rot270, x, y, 0))
                    avg_lum, std_lum, avg_sing, std_sing = self.get_fragment(rot0, rot90, rot180, rot270, x, y, 0)
                    avg_lum_list.append(avg_lum)
                    avg_sing_list.append(avg_sing)
                    std_lum_list.append(std_lum)
                    std_sing_list.append(std_sing)

        return avg_lum_list, std_lum_list, avg_sing_list, std_sing_list


    def get_singular_energy(self, block):
        return self.get_second_singular(block) / self.get_total_energy_of_block(block)


    def get_signature(self, list):
        signature = bitarray()
        for x in range(0, len(list) -1):
            if list[x] < list[x + 1]:
                signature.append(True)
            else:
                signature.append(False)

        return signature


# img_name = raw_input("Please enter image name which will process for feature extraction: ")
# img_name += ".jpg"
# image = 0
# try:
#     image = cv2.imread(img_name, 1)
# except:
#     print "ERROR: This image is not exist or unknown format."
    

# yunus = SignatureExtraction(image, 128, False, 8, 4)

# image1 = yunus.get_edges(image, 5)
# image2 = yunus.get_scaled()
# image3 = yunus.get_cropped()
# image4 = yunus.get_blurred()
#image5= yunus.get_hist_eq()
#image6 = yunus.get_blocks()
# cv2.imwrite("output/" + img_name[0:-4] + '_edge.jpg', image1)
# cv2.imwrite("output/" + img_name[0:-4] + '_scaled.jpg', image2)
# cv2.imwrite("output/" + img_name[0:-4] + '_cropped.jpg', image3)
# cv2.imwrite("output/" + img_name[0:-4] + '_blurred.jpg', image4)
#cv2.imwrite("output/" + img_name[0:-4] + '_histogram.jpg', image5)
#cv2.imwrite("output/" + img_name[0:-4] + '_xblocks.jpg', image6)