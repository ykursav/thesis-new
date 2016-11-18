from numpy import uintp, array, zeros, sum, rot90
from cv2 import getRotationMatrix2D, warpAffine, flip, setUseOptimized, imwrite
from bitarray import bitarray
import time
import gc
from ctypes import *
import ctypes
from numpy.ctypeslib import ndpointer
from multiprocessing.pool import Pool

libextraction = cdll.LoadLibrary("./C_Libraries/libextraction.so")
libextraction.sum.restype = ctypes.c_double
_doublepp = ndpointer(dtype = uintp, ndim = 1, flags = 'C')
libextraction.sum.argtypes = [_doublepp, ctypes.c_int]
libextraction.calculateSD.restype = ctypes.c_double
setUseOptimized(True)
##gc.enable()



def unwrap_self_f(arg, **kwarg):
    return SignatureExtraction.get_average_luminance_of_block(*arg, **kwarg)

class SignatureExtraction:
    '''N block size, M overlapping pixels, L image size'''
    def __init__(self, N, M, L):
        self.L = L
        self.N = N
        self.M = M
        self.image = array([])
        #self.image = image
        self.width = 0
        self.height = 0
        self.number_of_blocks = ((self.L - self.N) / self.M ) + 1
        self.block_all = zeros((self.number_of_blocks, self.number_of_blocks, self.N, self.N))


##    @profile
##    def get_width_height(self, image):
##        self.height = len(image)
##        self.width = len(image[0,:])


    #@profile
    def set_image(self, image):
        self.image = image

    #@profile
    def get_average_luminance_of_block(self, block):
        '''luminance calculation block'''
##        blockpp = (block.__array_interface__['data'][0] + np.arange(block.shape[0]) * block.strides[0]).astype(np.uintp)
##        block_sum = libextraction.sum(blockpp, ctypes.c_int(self.N))
        #print block_sum
        return sum(block) / (self.N * self.N)

    #@profile
    def get_blocks(self):
        '''Dividing cropped image N x N blocks by M overlapping'''
        I_vis_blur_y = zeros((self.number_of_blocks * self.N, self.number_of_blocks * self.N))
        I_vis_blur_x = zeros((self.L, self.number_of_blocks * self.N))
        for x in xrange(0, self.L - self.M, self.M):
            I_vis_blur_x[:, x * 2:x * 2 + self.N] = self.image[:, x:x + self.N]

        for y in xrange(0, self.L - self.M, self.M):
            I_vis_blur_y[y * 2:y * 2 + self.N, :] = I_vis_blur_x[y:y + self.N, :]


        return I_vis_blur_y
    #@profile
    def basic_rotations(self, image):
        center = (self.N * self.number_of_blocks) / 2
        rot_matrix = getRotationMatrix2D((center, center), 90, 1)
        rot90 = warpAffine(image, rot_matrix, (center * 2, center * 2))
        rot180 = warpAffine(rot90, rot_matrix, (center * 2, center * 2))
        rot270 = warpAffine(rot180, rot_matrix, (center * 2, center * 2))
##        fVertical0 = flip(image, 0)
##        fHorizontal0 = flip(image, 1)
##        fVertical90 = flip(rot90, 0)
##        fHorizontal90 = flip(rot90, 1)
##        fVertical180 = flip(rot180, 0)
##        fHorizontal180 = flip(rot180, 1)
##        fVertical270 = flip(rot270, 0)
##        fHorizontal270 = flip(rot270, 1)

        return rot90, rot180, rot270
##    fVertical0, fHorizontal0, fVertical90, fHorizontal90, fVertical180, fHorizontal180, \
##         fVertical270, fHorizontal270

    #@profile
    def get_fragment(self, rot0, rot90, rot180, rot270, x, y, only_rotate):

        p = Pool(processes=4)
        blocks = [rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N], rot90[y * 8:y * 8 + self.N], rot180[y * 8: y * 8 + self.N, x * 8:x * 8 + self.N], rot270[y * 8:y * 8 + self.N,x * 8:x * 8 + self.N]]
        if only_rotate == 1:
            [lum1, lum2, lum3, lum4] = p.map(unwrap_self_f, blocks)
            #lum1 = self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            #lum2 = self.get_average_luminance_of_block(rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            #lum3 = self.get_average_luminance_of_block(rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            #lum4 = self.get_average_luminance_of_block(rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            avg_lum = (lum1 + lum2 + lum3 + lum4) / 4
            #std_lum = np.std(np.array([lum1, lum2, lum3, lum4]))
            
            std_lum = libextraction.calculateSD(array([lum1, lum2, lum3, lum4]).ctypes.data_as(c_void_p))
            
            return avg_lum, std_lum

        elif only_rotate == -1:
            lum1 = self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            avg_lum = lum1
            std_lum = 0
            
            return avg_lum, std_lum

        else:
            lum1 = self.get_average_luminance_of_block(rot0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            lum2 = self.get_average_luminance_of_block(rot90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            lum3 = self.get_average_luminance_of_block(rot180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
            lum4 = self.get_average_luminance_of_block(rot270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum5 = self.get_average_luminance_of_block(fVertical0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum6 = self.get_average_luminance_of_block(fHorizontal0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum7 = self.get_average_luminance_of_block(fVertical90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum8 = self.get_average_luminance_of_block(fHorizontal90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum9 = self.get_average_luminance_of_block(fVertical180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum10 = self.get_average_luminance_of_block(fHorizontal180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum11 = self.get_average_luminance_of_block(fVertical270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum12 = self.get_average_luminance_of_block(fHorizontal270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])

            avg_lum = (lum1 + lum2 + lum3 + lum4) / 4

            #std_lum = np.std(np.array([lum1, lum2, lum3, lum4, lum5, lum6, lum7, lum8, lum9, lum10, lum11, lum12]))
            std_lum = libextraction.calculateSD(array([lum1, lum2, lum3, lum4]).ctypes.data_as(c_void_p))


            return avg_lum, std_lum

    #@profile
    def get_all_fragments(self):
        fragments_list = [[],[]]
        rot0 = self.get_blocks()
        rot90, rot180, rot270 = self.basic_rotations(rot0)
        counter_x = 0
        counter_y = 0
        append_std_lum = fragments_list[0].append
        append_avg_lum = fragments_list[1].append
        while(counter_x < 14 or counter_y < 14):
            if counter_x == 15:
                counter_y += 1
                counter_x = counter_y
            if counter_x == counter_y or counter_x == 14:
                if counter_x == 14 and counter_y == 14:
                    fragment_time = time.time()
                    avg_lum, std_lum = self.get_fragment(rot0, rot90, rot180, rot270, counter_x, counter_y, -1)
                    fragment_end_time = time.time()
                    append_std_lum(std_lum)
                    append_avg_lum(avg_lum)
                else:
                    fragment_time = time.time()
                    avg_lum, std_lum = self.get_fragment(rot0, rot90, rot180, rot270, counter_x, counter_y, 1)
                    fragment_end_time = time.time()
                    append_std_lum(std_lum)
                    append_avg_lum(avg_lum)
            else:
                avg_lum, std_lum = self.get_fragment(rot0, rot90, rot180, rot270, counter_x, counter_y, 0)
                append_std_lum(std_lum)
                append_avg_lum(avg_lum)
            counter_x += 1
        return fragments_list

 
    def get_signature(self):
        signature = bitarray()
        counter_list = 0
        counter_fragment = 0
        sig_append = signature.append
        for features in self.get_all_fragments():
            for x in range(0, len(features) -1):
                if features[x] < features[x + 1]:
                    sig_append(True)
                else:
                    sig_append(False)

        return signature



