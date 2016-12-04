from numpy import sum

N = 8
def get_average_luminance_of_block(block):
    '''luminance calculation block'''
##        blockpp = (block.__array_interface__['data'][0] + np.arange(block.shape[0]) * block.strides[0]).astype(np.uintp)
##        block_sum = libextraction.sum(blockpp, ctypes.c_int(self.N))
    #print block_sum
    
    return sum(block) / (N * N)