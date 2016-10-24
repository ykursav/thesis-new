import numpy as np
cimport numpy as np
import cv2
from bitarray import bitarray
from multiprocessing import Pool
from libc.math cimport pow
##import pathos.multiprocessing as mp
##from subprocess import call
##from threading import Thread
# import copy_reg
# import types



# def _pickle_method(m):
#     if m.im_self is None:
#         return getattr, (m.im_class, m.im_func.func_name)
#     else:
#         return getattr, (m.im_self, m.im_func.func_name)

# copy_reg.pickle(types.MethodType, _pickle_method)

# camera settings



cv2.setUseOptimized(True)
cdef class SignatureExtraction:
    '''N block size, M overlapping pixels, L image size'''
    cdef int L, N, M, width, height, number_of_blocks
    cdef np.ndarray image, image_blockssu
    def __init__(self, N, M, L):
        self.L = L
        self.N = N
        self.M = M
        self.image = np.array([])
        #self.image = image
        self.width = 0
        self.height = 0
        self.image_blocks = np.array([])
        self.number_of_blocks = ((self.L - self.N) / self.M ) + 1
        #self.block_all = np.zeros((self.number_of_blocks, self.number_of_blocks, self.N, self.N))
        #self.average_luminance = np.zeros((self.number_of_blocks, self.number_of_blocks, 1))
        #irrelevant but used in experimentally or optional it will remove or toggle comment in future
        #self.img_name = ""
        #self.hist_eq = np.array([])



    cdef get_width_height(self, np.ndarray image):
        self.height = len(image)
        self.width = len(image[0,:])



    cdef set_image(self, np.ndarray image):
        self.image = image

    #(optional area)
    # def get_hist_eq(self):
    #     '''Histogram equalization for cropped image'''
    #   self.hist_eq = cv2.equalizeHist(self.cropped_image)
    #     return self.hist_eq

    #check again it is correct or not

    cdef get_average_luminance_of_block(self, np.ndarray block):
        '''luminance calculation block'''
##        lum1 = [row for row in block]
##        lum1 = sum(sum(lum1)) / (self.N ** 2)
        return np.sum(block) / pow(self.N, 2)


######This part canceled new version
    # def get_total_energy_of_block(self, block):
    #     block = block.flatten()
    #     total_energy = 0
    #     for element in block:
    #         total_energy += element ** 2
    #
    #     return total_energy
    #
    # def get_second_singular(self, block):
    #     U, s, V = np.linalg.svd(block)
    #     return s[1] ** 2


    cpdef get_blocks(self):
        '''Dividing cropped image N x N blocks by M overlapping'''
        cdef np.ndarray I_vis_blur_x, I_vis_blur_y
        I_vis_blur_y = np.zeros((self.number_of_blocks * self.N, self.number_of_blocks * self.N))
        I_vis_blur_x = np.zeros((self.L, self.number_of_blocks * self.N))
        for x in range(0, self.L - self.M, self.M):
            I_vis_blur_x[:, x * 2:x * 2 + self.N] = self.image[:, x:x + self.N]

        for y in range(0, self.L - self.M, self.M):
            I_vis_blur_y[y * 2:y * 2 + self.N, :] = I_vis_blur_x[y:y + self.N, :]


        return I_vis_blur_y

    cpdef basic_rotations(self, np.ndarray image):
        cdef int center
        # cdef np.ndarray M1, M2, M3, rot90, rot180, rot270, fVertical0, fHorizontal0, fVertical90, fHorizontal90, \
        # fVertical180, fHorizontal180, fVertical270, fHorizontal270
        center = (self.N * self.number_of_blocks) / 2
        # M1 = cv2.getRotationMatrix2D((center, center), 90, 1)
        # M2 = cv2.getRotationMatrix2D((center, center), 180, 1)
        # M3 = cv2.getRotationMatrix2D((center, center), 270, 1)
        # rot90 = cv2.warpAffine(image, M1, (center * 2, center * 2))
        # rot180 = cv2.warpAffine(image, M2, (center * 2, center * 2))
        # rot270 = cv2.warpAffine(image, M3, (center * 2, center * 2))
        # fVertical0 = cv2.flip(image, 0)
        # fHorizontal0 = cv2.flip(image, 1)
        # fVertical90 = cv2.flip(rot90, 0)
        # fHorizontal90 = cv2.flip(rot90, 1)
        # fVertical180 = cv2.flip(rot180, 0)
        # fHorizontal180 = cv2.flip(rot180, 1)
        # fVertical270 = cv2.flip(rot270, 0)
        # fHorizontal270 = cv2.flip(rot270, 1)

        return cv2.warpAffine(image, cv2.getRotationMatrix2D((center, center), 90, 1), (center * 2, center * 2)), \
        cv2.warpAffine(image, cv2.getRotationMatrix2D((center, center), 180, 1), (center * 2, center * 2)), \
        cv2.warpAffine(image, cv2.getRotationMatrix2D((center, center), 270, 1), (center * 2, center * 2)), \
        cv2.flip(image, 0), cv2.flip(image, 1), cv2.flip(rot90, 0), cv2.flip(rot90, 1), \
        cv2.flip(rot180, 0), cv2.flip(rot180, 1), cv2.flip(rot270, 0), cv2.flip(rot270, 1)

###Not used old version
    # cpdef get_luminance(self, rot0, rot90, rot180, rot270, x, y, only_rotate):
    #     cdef np.ndarray group = np.zeros((8, 64))
    #     group[:, 0:8] = rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
    #
    #     group[:, 8:16] = rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
    #     group[:, 16:24] = rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
    #     group[:, 24:32] = rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
    #
    #     # lum1 = self.get_average_luminance_of_block(group[:, 0:8])
    #     # lum2 = self.get_average_luminance_of_block(group[:, 8:16])
    #     # lum3 = self.get_average_luminance_of_block(group[:, 16:24])
    #     # lum4 = self.get_average_luminance_of_block(group[:, 24:32])
    #
    #
    #     if only_rotate == 1:
    #         return ((self.get_average_luminance_of_block(group[:, 0:8]) + self.get_average_luminance_of_block(group[:, 8:16]) \
    #          + self.get_average_luminance_of_block(group[:, 16:24])3 + self.get_average_luminance_of_block(group[:, 24:32])) / 4)
    #     elif only_rotate == -1:
    #         return self.get_average_luminance_of_block(group[:, 0:8])
    #
    #     else:
    #         group[:, 32:40] = cv2.flip(group[:, 24:32], 1)
    #         group[:, 40:48] = cv2.flip(group[:, 8:16], 1)
    #         group[:, 48:56] = cv2.flip(group[:, 16:24], 0)
    #         group[:, 56:64] = cv2.flip(group[:, 0:8], 0)
    #
    #         # lum5 = self.get_average_luminance_of_block(group[:, 32:40])
    #         # lum6 = self.get_average_luminance_of_block(group[:, 40:48])
    #         # lum7 = self.get_average_luminance_of_block(group[:, 48:56])
    #         # lum8 = self.get_average_luminance_of_block(group[:, 56:64])
    #
    #
    #
    #
    #         return ((self.get_average_luminance_of_block(group[:, 0:8]) + self.get_average_luminance_of_block(group[:, 8:16]) \
    #          + self.get_average_luminance_of_block(group[:, 16:24])3 + self.get_average_luminance_of_block(group[:, 24:32]) \
    #          + self.get_average_luminance_of_block(group[:, 32:40]) + self.get_average_luminance_of_block(group[:, 40:48]) \
    #          + self.get_average_luminance_of_block(group[:, 48:56]) + self.get_average_luminance_of_block(group[:, 56:64])) / 8)
    #
    #
    # def get_std_lum(self, rot0, rot90, rot180, rot270, x, y, only_rotate):
    #     group = np.zeros((8, 64))
    #     group[:, 0:8] = rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
    #     group[:, 8:16] = rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
    #     group[:, 16:24] = rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
    #     group[:, 24:32] = rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
    #
    #     lum1 = self.get_average_luminance_of_block(group[:, 0:8])
    #     lum2 = self.get_average_luminance_of_block(group[:, 8:16])
    #     lum3 = self.get_average_luminance_of_block(group[:, 16:24])
    #     lum4 = self.get_average_luminance_of_block(group[:, 24:32])
    #
    #     if only_rotate == 1:
    #         std_lum = np.std(np.array([lum1, lum2, lum3, lum4]))
    #
    #         return std_lum
    #     elif only_rotate == -1:
    #         std_lum = 0
    #
    #         return std_lum
    #     else:
    #         group[:, 32:40] = cv2.flip(group[:, 24:32], 1)
    #         group[:, 40:48] = cv2.flip(group[:, 8:16], 1)
    #         group[:, 48:56] = cv2.flip(group[:, 16:24], 0)
    #         group[:, 56:64] = cv2.flip(group[:, 0:8], 0)
    #
    #         lum5 = self.get_average_luminance_of_block(group[:, 32:40])
    #         lum6 = self.get_average_luminance_of_block(group[:, 40:48])
    #         lum7 = self.get_average_luminance_of_block(group[:, 48:56])
    #         lum8 = self.get_average_luminance_of_block(group[:, 56:64])
    #
    #         std_lum = np.std(np.array([lum1, lum2, lum3, lum4, lum5, lum6, lum7, lum8]))
    #
    #
    #         return std_lum

##    def get_avg_sing(self, rot0, rot90, rot180, rot270, x, y, only_rotate):
##        group = np.zeros((8, 64))
##        group[:, 0:8] = rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##        group[:, 8:16] = rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##        group[:, 16:24] = rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##        group[:, 24:32] = rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##
##        sing1 = self.get_singular_energy(group[:, 0:8])
##        sing2 = self.get_singular_energy(group[:, 8:16])
##        sing3 = self.get_singular_energy(group[:, 16:24])
##        sing4 = self.get_singular_energy(group[:, 24:32])
##
##        if only_rotate == 1:
##            avg_sing = (sing1 + sing2 + sing3 + sing4) / 4
##
##            return avg_sing
##        elif only_rotate == -1:
##            avg_sing = sing1
##
##            return avg_sing
##        else:
##            group[:, 32:40] = cv2.flip(group[:, 24:32], 1)
##            group[:, 40:48] = cv2.flip(group[:, 8:16], 1)
##            group[:, 48:56] = cv2.flip(group[:, 16:24], 0)
##            group[:, 56:64] = cv2.flip(group[:, 0:8], 0)
##
##            sing5 = self.get_singular_energy(group[:, 32:40])
##            sing6 = self.get_singular_energy(group[:, 40:48])
##            sing7 = self.get_singular_energy(group[:, 48:56])
##            sing8 = self.get_singular_energy(group[:, 56:64])
##
##            avg_sing = (sing1 + sing2 + sing3 + sing4 + sing5 + sing6 + sing7 + sing8) / 8
##
##            return avg_sing

##    def get_std_sing(self, rot0, rot90, rot180, rot270, x, y, only_rotate):
##        group = np.zeros((8, 64))
##        group[:, 0:8] = rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##        group[:, 8:16] = rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##        group[:, 16:24] = rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##        group[:, 24:32] = rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##
##        sing1 = self.get_singular_energy(group[:, 0:8])
##        sing2 = self.get_singular_energy(group[:, 8:16])
##        sing3 = self.get_singular_energy(group[:, 16:24])
##        sing4 = self.get_singular_energy(group[:, 24:32])
##
##        if only_rotate == 1:
##            std_sing = np.std(np.array([sing1, sing2, sing3, sing4]))
##
##            return std_sing
##        elif only_rotate == -1:
##            std_sing = 0
##
##            return std_sing
##        else:
##            group[:, 32:40] = cv2.flip(group[:, 24:32], 1)
##            group[:, 40:48] = cv2.flip(group[:, 8:16], 1)
##            group[:, 48:56] = cv2.flip(group[:, 16:24], 0)
##            group[:, 56:64] = cv2.flip(group[:, 0:8], 0)
##
##            sing5 = self.get_singular_energy(group[:, 32:40])
##            sing6 = self.get_singular_energy(group[:, 40:48])
##            sing7 = self.get_singular_energy(group[:, 48:56])
##            sing8 = self.get_singular_energy(group[:, 56:64])
##
##            std_sing = np.std(np.array([sing1, sing2, sing3, sing4, sing5, sing6, sing7, sing8]))
##
##            return std_sing

    cpdef get_fragment(self, rot0, rot90, rot180, rot270, fVertical0, fHorizontal0, fVertical90, fHorizontal90, \
    fVertical180, fHorizontal180, fVertical270, fHorizontal270, x, y, only_rotate):
##        group = np.zeros((8, 96))
##        group[:, 0:8] = rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##        group[:, 8:16] = rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##        group[:, 16:24] = rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##        group[:, 24:32] = rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]



##        pool = mp.ProcessingPool(nodes = 8)
##        sings = pool.map(self.get_singular_energy, (group[:, 0:8],group[:, 8:16],group[:, 16:24],group[:, 24:32]))
##


##        sing1 = sings[0]
##        sing2 = sings[1]
##        sing3 = sings[2]
##        sing4 = sings[3]


        if only_rotate == 1:
##            pool = mp.ProcessingPool(node = 4)
##            results = pool.imap(self.get_average_luminance_of_block, group[:, 0:8],group[:, 8:16],group[:, 16:24],group[:, 24:32])
##            results = results(list)

            # lum1 = self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum2 = self.get_average_luminance_of_block(rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum3 = self.get_average_luminance_of_block(rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum4 = self.get_average_luminance_of_block(rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # avg_lum = (lum1 + lum2 + lum3 + lum4) / 4
            # std_lum = np.std(np.array([lum1, lum2, lum3, lum4]))

##            sing1 = self.get_singular_energy(group[:, 0:8])
##            sing2 = self.get_singular_energy(group[:, 8:16])
##            sing3 = self.get_singular_energy(group[:, 16:24])
##            sing4 = self.get_singular_energy(group[:, 24:32])

##            avg_sing = (sing1 + sing2 + sing3 + sing4) / 4
##            std_sing = np.std(np.array([sing1, sing2, sing3, sing4]))
##            avg_sing = 0
##            std_sing = 0

##            return avg_lum, std_lum, avg_sing, std_sing
            return ((self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) + self.get_average_luminance_of_block(rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) \
            + lum3 = self.get_average_luminance_of_block(rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) + self.get_average_luminance_of_block(rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])) / 4), \
            np.std(np.array([self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), self.get_average_luminance_of_block(rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), \
            self.get_average_luminance_of_block(rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), self.get_average_luminance_of_block(rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])]))

        elif only_rotate == -1:
            # lum1 = self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # avg_lum = lum1
            # std_lum = 0

##            sing1 = self.get_singular_energy(group[:, 0:8])
##            avg_sing = sing1
##            std_sing = 0

##            return avg_lum, std_lum, avg_sing, std_sing
            return self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), 0

        else:
##            group[:, 32:40] = fVertical0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##            group[:, 40:48] = fHorizontal0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##            group[:, 48:56] = fVertical90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##            group[:, 56:64] = fHorizontal90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##            group[:, 64:72] = fVertical180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##            group[:, 72:80] = fHorizontal180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##            group[:, 80:88] = fVertical270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]
##            group[:, 88:96] = fHorizontal270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]

            # lum1 = self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum2 = self.get_average_luminance_of_block(rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum3 = self.get_average_luminance_of_block(rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum4 = self.get_average_luminance_of_block(rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum5 = self.get_average_luminance_of_block(fVertical0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum6 = self.get_average_luminance_of_block(fHorizontal0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum7 = self.get_average_luminance_of_block(fVertical90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum8 = self.get_average_luminance_of_block(fHorizontal90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum9 = self.get_average_luminance_of_block(fVertical180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum10 = self.get_average_luminance_of_block(fHorizontal180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum11 = self.get_average_luminance_of_block(fVertical270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            # lum12 = self.get_average_luminance_of_block(fHorizontal270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])

##            sing1 = self.get_singular_energy(group[:, 0:8])
##            sing2 = self.get_singular_energy(group[:, 8:16])
##            sing3 = self.get_singular_energy(group[:, 16:24])
##            sing4 = self.get_singular_energy(group[:, 24:32])
##            sing5 = self.get_singular_energy(group[:, 32:40])
##            sing6 = self.get_singular_energy(group[:, 40:48])
##            sing7 = self.get_singular_energy(group[:, 48:56])
##            sing8 = self.get_singular_energy(group[:, 56:64])
##            sing9 = self.get_singular_energy(group[:, 64:72])
##            sing10 = self.get_singular_energy(group[:, 72:80])
##            sing11 = self.get_singular_energy(group[:, 80:88])
##            sing12 = self.get_singular_energy(group[:, 88:96])

            # avg_lum = (lum1 + lum2 + lum3 + lum4 + lum5 + lum6 + lum7 + lum8 + lum9 + lum10 + lum11 + lum12) / 12
            # # avg_lum = (lum1 + lum2 + lum3 + lum4) / 4
            #
            # std_lum = np.std(np.array([lum1, lum2, lum3, lum4, lum5, lum6, lum7, lum8, lum9, lum10, lum11, lum12]))
            # std_lum = np.std(np.array([lum1, lum2, lum3, lum4]))

##            avg_sing = 0
##            avg_sing = (sing1 + sing2 + sing3 + sing4 + sing5 + sing6 + sing7 + sing8 + sing9 + sing10 + sing11 + sing12) / 12
            # avg_sing = (sing1 + sing2 + sing3 + sing4) / 4

##            std_sing = 0
##            std_sing = np.std(np.array([sing1, sing2, sing3, sing4, sing5, sing6, sing7, sing8, sing9, sing10, sing11, sing12]))
            # std_sing = np.std(np.array([sing1, sing2, sing3, sing4]))



##            return avg_lum, std_lum, avg_sing, std_sing
            return ((self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) + self.get_average_luminance_of_block(rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) \
            + self.get_average_luminance_of_block(rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) + self.get_average_luminance_of_block(rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) \
            + self.get_average_luminance_of_block(fVertical0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) + self.get_average_luminance_of_block(fHorizontal0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) \
            + self.get_average_luminance_of_block(fVertical90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) + self.get_average_luminance_of_block(fHorizontal90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) \
            + self.get_average_luminance_of_block(fVertical180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) + self.get_average_luminance_of_block(fHorizontal180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) \
            + self.get_average_luminance_of_block(fVertical270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]) + self.get_average_luminance_of_block(fHorizontal270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])) / 12), \
            np.std(np.array([self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), self.get_average_luminance_of_block(rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), \
            self.get_average_luminance_of_block(rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), self.get_average_luminance_of_block(rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), \
            self.get_average_luminance_of_block(fVertical0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), self.get_average_luminance_of_block(fHorizontal0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), \
            self.get_average_luminance_of_block(fVertical90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), self.get_average_luminance_of_block(fHorizontal90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), \
            self.get_average_luminance_of_block(fVertical180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), self.get_average_luminance_of_block(fHorizontal180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]),\
            self.get_average_luminance_of_block(fVertical270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N]), self.get_average_luminance_of_block(fHorizontal270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])]))

    cpdef get_all_fragments(self):
##        fragments_list = [[],[],[],[]]
        cdef int counter_x, counter_y
        cdef float std_lum, avg_lum
        cdef np.ndarray rot0, rot90, rot180, rot270, fVertical0, fHorizontal0, fVertical90, fHorizontal90, \
        fVertical180, fHorizontal180, fVertical270, fHorizontal270
        fragments_list = [[],[]]
        rot0 = self.get_blocks()
        rot90, rot180, rot270, fVertical0, fHorizontal0, fVertical90, fHorizontal90, \
        fVertical180, fHorizontal180, fVertical270, fHorizontal270 = self.basic_rotations(rot0)
        counter_x = 0
        counter_y = 0
        append_std_lum = fragments_list[0].append
        append_avg_lum = fragments_list[1].append
##        append_std_sing = fragments_list[2].append
##        append_avg_sing = fragments_list[3].append

        while(counter_x < 14 or counter_y < 14):
            if counter_x == 15:
                counter_y += 1
                counter_x = counter_y
            if counter_x == counter_y or counter_x == 14:
                if counter_x == 14 and counter_y == 14:
                    avg_lum, std_lum = self.get_fragment(rot0, rot90, rot180, rot270, fVertical0, fHorizontal0, fVertical90, fHorizontal90, \
    fVertical180, fHorizontal180, fVertical270, fHorizontal270, counter_x, counter_y, -1)
                    append_std_lum(std_lum)
                    append_avg_lum(avg_lum)
##                    append_std_sing(std_sing)
##                    append_avg_sing(avg_sing)
##                    break
                else:
                    avg_lum, std_lum = self.get_fragment(rot0, rot90, rot180, rot270, fVertical0, fHorizontal0, fVertical90, fHorizontal90, \
    fVertical180, fHorizontal180, fVertical270, fHorizontal270, counter_x, counter_y, 1)
                    append_std_lum(std_lum)
                    append_avg_lum(avg_lum)
##                    append_std_sing(std_sing)
##                    append_avg_sing(avg_sing)
            else:
                avg_lum, std_lum = self.get_fragment(rot0, rot90, rot180, rot270,fVertical0, fHorizontal0, fVertical90, fHorizontal90, \
    fVertical180, fHorizontal180, fVertical270, fHorizontal270, counter_x, counter_y, 0)
                append_std_lum(std_lum)
                append_avg_lum(avg_lum)
##                append_std_sing(std_sing)
##                append_avg_sing(avg_sing)
            counter_x += 1
        return fragments_list


##    def get_singular_energy_q(self, q, block):
##        q.put(self.get_second_singular(block) / self.get_total_energy_of_block(block))
##
##    def get_singular_energy(self, block):
####        return self.get_second_singular(block) / self.get_total_energy_of_block(block)
        return 0


    cpdef get_signature(self, list):
        cdef int counter_fragment
        signature = bitarray()
        for features in list:
            for x in range(0, len(features) -1):
                if features[x] < features[x + 1]:
                    signature.append(True)
                else:
                    signature.append(False)

        return signature
