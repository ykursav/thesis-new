from numpy import uintp, array, zeros, sum
from cv2 import getRotationMatrix2D, warpAffine, flip, setUseOptimized, imwrite
from bitarray import bitarray
import gc
from ctypes import *
import ctypes
from numpy.ctypeslib import ndpointer
#from multiprocessing.pool import Pool, Process, Value
import threading
import subprocess
import Queue
from threading import Thread

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
rot0 = array([])
rot90 = array([])
rot180 = array([])
rot270 = array([])
counter = 0
def set_initials(N_f, M_f, L_f, image_f, counter_f):
    global N, M, L, image, number_of_blocks, counter
    N = N_f
    M = M_f 
    L = L_f
    image = image_f
    counter = counter_f
    number_of_blocks = ((L - N) / M) + 1

# def get_average_luminance_of_block_pro(x, y, rots, num):
#     '''luminance calculation block'''
# ##        blockpp = (block.__array_interface__['data'][0] + np.arange(block.shape[0]) * block.strides[0]).astype(np.uintp)
# ##        block_sum = libextraction.sum(blockpp, ctypes.c_int(self.N))
#     #print block_sum
#     if rots == 0:
#         num.value = sum(rot0[y * 8:y * 8 + N, x * 8:x * 8 + N]) / (N * N)
#     elif rots == 1:
#         num.value = sum(rot90[y * 8:y * 8 + N, x * 8:x * 8 + N]) / (N * N)
#     elif rots == 2:
#         num.value = sum(rot180[y * 8: y * 8 + N, x * 8:x * 8 + N]) / (N * N)
#     elif rots == 3:
#         num.value = sum(rot270[y * 8:y * 8 + N,x * 8:x * 8 + N]) / (N * N)

#@profile    
def get_average_luminance_of_block(block):
    return sum(block) / (N * N)

#def thread_luminance(block, q):
 #   q.put(sum(block) / (N * N))

#@profile
def get_blocks():
    global counter
    '''Dividing cropped image N x N blocks by M overlapping'''
    I_vis_blur_y = zeros((number_of_blocks * N, number_of_blocks * N))
    I_vis_blur_x = zeros((L, number_of_blocks * N))
    for x in xrange(0, L - M, M):
        I_vis_blur_x[:, x * 2:x * 2 + N] = image[:, x:x + N]

    for y in xrange(0, L - M, M):
        I_vis_blur_y[y * 2:y * 2 + N, :] = I_vis_blur_x[y:y + N, :]

    imwrite("Blocked/blocked " + str(counter) + ".jpg", I_vis_blur_y)
    return I_vis_blur_y

#@profile
def basic_rotations(rot0):
    center = (N * number_of_blocks) / 2
    rot_matrix = getRotationMatrix2D((center, center), 90, 1)
    rot90 = warpAffine(rot0, rot_matrix, (center * 2, center * 2))
    rot180 = warpAffine(rot90, rot_matrix, (center * 2, center * 2))
    rot270 = warpAffine(rot180, rot_matrix, (center * 2, center * 2))
    rot90 = rot90[0:120, 0:120]
    rot180 = rot180[0:120, 0:120]
    rot270 = rot270[0:120, 0:120]
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
def get_fragment(x, y, only_rotate):
    if only_rotate == 1:
        # p = Pool(processes =4)
        # results1 = p.apply_async(get_average_luminance_of_block, [rot0[y * 8:y * 8 + N, x * 8:x * 8 + N]])
        # results2 = p.apply_async(get_average_luminance_of_block, [rot90[y * 8:y * 8 + N, x * 8:x * 8 + N]])
        # results3 = p.apply_async(get_average_luminance_of_block, [rot180[y * 8:y * 8 + N, x * 8:x * 8 + N]])
        # results4 = p.apply_async(get_average_luminance_of_block, [rot270[y * 8:y * 8 + N, x * 8:x * 8 + N]])
        # p.close()
        # p.join
        #results = []
        #jobs = []
        #num = Value('d', 0.0)
        # for rots in xrange(4):
        #     proc = Process(target = get_average_luminance_of_block_pro, args =(x, y, rots, num,))
        #     results.append(num.value)
        #     jobs.append(proc)
        #     proc.start
        # for proc in jobs:
        #     proc.join()
        # for i in range(4):
        #     if i == 0:
        #         t1 = Thread(target=thread_luminance, args=(rot0[y * 8:y * 8 + N, x * 8:x * 8 + N],q,))
        #         t1.start()
        #     elif i == 1:
        #         t2 = Thread(target=thread_luminance, args=(rot90[y * 8:y * 8 + N, x * 8:x * 8 + N],q,))
        #         t2.start()
        #     elif i == 2:
        #         t3 = Thread(target=thread_luminance, args=(rot180[y * 8:y * 8 + N, x * 8:x * 8 + N],q,))
        #         t3.start()
        #     else:
        #         t4 = Thread(target=thread_luminance, args=(rot270[y * 8:y * 8 + N, x * 8:x * 8 + N],q,))
        #         t4.start()

        # t1.join()
        # t2.join()
        # t3.join()
        # t4.join()
        # q1 = Queue.Queue()
        # t1 = Thread(target=thread_luminance, args=(rot0[y * 8:y * 8 + N, x * 8:x * 8 + N],q1,))
        # t2 = Thread(target=thread_luminance, args=(rot90[y * 8:y * 8 + N, x * 8:x * 8 + N],q1,))
        # t3 = Thread(target=thread_luminance, args=(rot180[y * 8:y * 8 + N, x * 8:x * 8 + N],q1,))
        # t4 = Thread(target=thread_luminance, args=(rot270[y * 8:y * 8 + N, x * 8:x * 8 + N],q1,))
        # t1.start()
        # t2.start()
        # t3.start()
        # t4.start()
        # t1.join()
        # t2.join()
        # t3.join()
        # t4.join()
        # print q1.get()
        results = map(get_average_luminance_of_block, [rot0[y * N:y * N + N, x * N:x * N + N], rot90[y * N:y * N + N, x * N:x * N + N], \
            rot180[y * N:y * N + N, x * N:x * N + N], rot270[y * N:y * N + N, x * N:x * N + N]])
        #lum1 = get_average_luminance_of_block(rot0[y * 8:y * 8 + N, x * 8:x * 8 + N])
        #lum2 = get_average_luminance_of_block(rot90[y * 8:y * 8 + N, x * 8:x * 8 + N])
        #lum3 = get_average_luminance_of_block(rot180[y * 8:y * 8 + N, x * 8:x * 8 + N])
        #lum4 = get_average_luminance_of_block(rot270[y * 8:y * 8 + N, x * 8:x * 8 + N])
        # print lum1
        avg_lum = (results[0] + results[1] + results[2] + results[3]) / 4
        #std_lum = np.std(np.array([lum1, lum2, lum3, lum4]))
        std_lum = libextraction.calculateSD(array([results[0], results[1], results[2], results[3]]).ctypes.data_as(c_void_p))
        return avg_lum, std_lum

    elif only_rotate == -1:
        lum1 = get_average_luminance_of_block(rot0[y * N:y * N + N, x * N:x * N + N])
        avg_lum = lum1
        std_lum = 0
        
        return avg_lum, std_lum

  #  else:
  #      results = map(get_average_luminance_of_block, [rot0[y * 8:y * 8 + N, x * 8:x * 8 + N], rot90[y * 8:y * 8 + N, x * 8:x * 8 + N], \
  #          rot180[y * 8:y * 8 + N, x * 8:x * 8 + N], rot270[y * 8:y * 8 + N, x * 8:x * 8 + N]])
  #      #lum1 = get_average_luminance_of_block(rot0[y * 8:y * 8 + N, x * 8:x * 8 + N])
  #      #lum2 = get_average_luminance_of_block(rot90[y * 8:y * 8 + N, x * 8:x * 8 + N])
  #      #lum3 = get_average_luminance_of_block(rot180[y * 8:y * 8 + N, x * 8:x * 8 + N])
        #lum4 = get_average_luminance_of_block(rot270[y * 8:y * 8 + N, x * 8:x * 8 + N])
##            lum5 = self.get_average_luminance_of_block(fVertical0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum6 = self.get_average_luminance_of_block(fHorizontal0[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum7 = self.get_average_luminance_of_block(fVertical90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum8 = self.get_average_luminance_of_block(fHorizontal90[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum9 = self.get_average_luminance_of_block(fVertical180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum10 = self.get_average_luminance_of_block(fHorizontal180[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum11 = self.get_average_luminance_of_block(fVertical270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])
##            lum12 = self.get_average_luminance_of_block(fHorizontal270[y * 8:y * 8 + self.N, x * 8:x * 8 + self.N])

       # avg_lum = (lum1 + lum2 + lum3 + lum4) / 4
#        avg_lum = (results[0] + results[1] + results[2] + results[3]) / 4

        #std_lum = np.std(np.array([lum1, lum2, lum3, lum4, lum5, lum6, lum7, lum8, lum9, lum10, lum11, lum12]))
        #std_lum = libextraction.calculateSD(array([lum1, lum2, lum3, lum4]).ctypes.data_as(c_void_p))
 #       std_lum = libextraction.calculateSD(array([results[0], results[1], results[2], results[3]]).ctypes.data_as(c_void_p))


#        return avg_lum, std_lum
#@profile
def get_all_fragments():
    global rot0, rot90, rot180, rot270
    fragments_list = [[],[]]
    rot0 = get_blocks()
    rot90, rot180, rot270 = basic_rotations(rot0)
    counter_x = 0
    counter_y = 0
    append_std_lum = fragments_list[0].append
    append_avg_lum = fragments_list[1].append
    while(counter_x < number_of_blocks / 2 or counter_y < number_of_blocks / 2):
        if counter_x == (number_of_blocks / 2) + 1:
            counter_y += 1
            counter_x = counter_y
        if counter_x == counter_y or counter_x == number_of_blocks / 2:
            if counter_x == number_of_blocks / 2 and counter_y == number_of_blocks / 2:
                avg_lum, std_lum = get_fragment(counter_x, counter_y, -1)
                append_std_lum(std_lum)
                append_avg_lum(avg_lum)
            else:
                avg_lum, std_lum = get_fragment(counter_x, counter_y, 1)
                append_std_lum(std_lum)
                append_avg_lum(avg_lum)
        else:
            avg_lum, std_lum = get_fragment(counter_x, counter_y, 1)
            append_std_lum(std_lum)
            append_avg_lum(avg_lum)
        counter_x += 1
    return fragments_list

#@profile
def get_signature():
    signature = bitarray()
    counter_list = 0
    counter_fragment = 0
    sig_append = signature.append
    fragments = get_all_fragments()
    for features in fragments:
        for x in range(0, len(features) -1):
            if features[x] < features[x + 1]:
                sig_append(True)
            else:
                sig_append(False)

    sig_append(False)
    sig_append(False)
    #print("Generated signature length:%d",len(signature))
    return signature





