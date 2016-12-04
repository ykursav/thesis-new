from numpy import uintp, array, zeros, sum, rot90
from cv2 import getRotationMatrix2D, warpAffine, flip, setUseOptimized, imwrite
from bitarray import bitarray
import time
import gc
from ctypes import *
import ctypes
from numpy.ctypeslib import ndpointer
from multiprocessing.pool import Pool
import threading

libextraction = cdll.LoadLibrary("./C_Libraries/libextraction.so")
libextraction.sum.restype = ctypes.c_double
_doublepp = ndpointer(dtype = uintp, ndim = 1, flags = 'C')
libextraction.sum.argtypes = [_doublepp, ctypes.c_int]
libextraction.calculateSD.restype = ctypes.c_double
setUseOptimized(True)
##gc.enable()
N = 0
M = 0
L = 0
image = array([])
width = 0
height = 0
number_of_block = 0
def set_initials(N_f, M_f, L_f, image_f):
    global N, M, L, image, number_of_blocks
    N = N_f
    M = M_f 
    L = L_f
    print N, M, L
    image = image_f
    number_of_blocks = ((L - N) / M) + 1

def get_average_luminance_of_block(block):
    '''luminance calculation block'''
##        blockpp = (block.__array_interface__['data'][0] + np.arange(block.shape[0]) * block.strides[0]).astype(np.uintp)
##        block_sum = libextraction.sum(blockpp, ctypes.c_int(self.N))
    #print block_sum
    
    return sum(block) / (N * N)

def get_blocks():
    '''Dividing cropped image N x N blocks by M overlapping'''
    I_vis_blur_y = zeros((number_of_blocks * N, number_of_blocks * N))
    I_vis_blur_x = zeros((L, number_of_blocks * N))
    for x in xrange(0, L - M, M):
        I_vis_blur_x[:, x * 2:x * 2 + N] = image[:, x:x + N]

    for y in xrange(0, L - M, M):
        I_vis_blur_y[y * 2:y * 2 + N, :] = I_vis_blur_x[y:y + N, :]


    return I_vis_blur_y

def basic_rotations(rot0):
    center = (N * number_of_blocks) / 2
    rot_matrix = getRotationMatrix2D((center, center), 90, 1)
    rot90 = warpAffine(rot0, rot_matrix, (center * 2, center * 2))
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


def get_fragment(rot0, rot90, rot180, rot270, x, y, only_rotate):

    blocks = [rot0[y * 8:y * 8 + N, x * 8:x * 8 + N], rot90[y * 8:y * 8 + N], rot180[y * 8: y * 8 + N, x * 8:x * 8 + N], rot270[y * 8:y * 8 + N,x * 8:x * 8 + N]]
    if only_rotate == 1:
        #p = Pool(processes =4)
        #results1 = p.apply_async(get_average_luminance_of_block, [rot0[y * 8:y * 8 + N, x * 8:x * 8 + N]])
        #results2 = p.apply_async(get_average_luminance_of_block, [rot90[y * 8:y * 8 + N, x * 8:x * 8 + N]])
        #results3 = p.apply_async(get_average_luminance_of_block, [rot180[y * 8:y * 8 + N, x * 8:x * 8 + N]])
        #results4 = p.apply_async(get_average_luminance_of_block, [rot270[y * 8:y * 8 + N, x * 8:x * 8 + N]])
        #p.close()
        # p.join()
        lum1 = get_average_luminance_of_block(rot0[y * 8:y * 8 + N, x * 8:x * 8 + N])
        lum2 = get_average_luminance_of_block(rot90[y * 8:y * 8 + N, x * 8:x * 8 + N])
        lum3 = get_average_luminance_of_block(rot180[y * 8:y * 8 + N, x * 8:x * 8 + N])
        lum4 = get_average_luminance_of_block(rot270[y * 8:y * 8 + N, x * 8:x * 8 + N])
        avg_lum = (lum1 + lum2 + lum3 + lum4) / 4
        
        #std_lum = np.std(np.array([lum1, lum2, lum3, lum4]))
        std_lum = libextraction.calculateSD(array([lum1, lum2, lum3, lum4]).ctypes.data_as(c_void_p))
        return avg_lum, std_lum

    elif only_rotate == -1:
        lum1 = get_average_luminance_of_block(rot0[y * 8:y * 8 + N, x * 8:x * 8 + N])
        avg_lum = lum1
        std_lum = 0
        
        return avg_lum, std_lum

    else:
        lum1 = get_average_luminance_of_block(rot0[y * 8:y * 8 + N, x * 8:x * 8 + N])
        lum2 = get_average_luminance_of_block(rot90[y * 8:y * 8 + N, x * 8:x * 8 + N])
        lum3 = get_average_luminance_of_block(rot180[y * 8:y * 8 + N, x * 8:x * 8 + N])
        lum4 = get_average_luminance_of_block(rot270[y * 8:y * 8 + N, x * 8:x * 8 + N])
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

def get_all_fragments():
    fragments_list = [[],[]]
    rot0 = get_blocks()
    rot90, rot180, rot270 = basic_rotations(rot0)
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
                avg_lum, std_lum = get_fragment(rot0, rot90, rot180, rot270, counter_x, counter_y, -1)
                fragment_end_time = time.time()
                append_std_lum(std_lum)
                append_avg_lum(avg_lum)
            else:
                fragment_time = time.time()
                avg_lum, std_lum = get_fragment(rot0, rot90, rot180, rot270, counter_x, counter_y, 1)
                fragment_end_time = time.time()
                append_std_lum(std_lum)
                append_avg_lum(avg_lum)
        else:
            avg_lum, std_lum = get_fragment(rot0, rot90, rot180, rot270, counter_x, counter_y, 0)
            append_std_lum(std_lum)
            append_avg_lum(avg_lum)
        counter_x += 1
    return fragments_list

def get_signature():
    signature = bitarray()
    counter_list = 0
    counter_fragment = 0
    sig_append = signature.append
    for features in get_all_fragments():
        for x in range(0, len(features) -1):
            if features[x] < features[x + 1]:
                sig_append(True)
            else:
                sig_append(False)

    return signature





