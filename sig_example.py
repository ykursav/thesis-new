from bitarray import bitarray

f = open("signature_test2.bin", "r")
m = bitarray()
counter = 0
m = bitarray()
m.fromfile(f)
print  m[0:240]

#while True:
 #   m = bitarray()
  #  m.fromfile(f, 30)
   # if not m:
    #    break
   # print str(m) + "\n"
   # counter += 1
   # print counter
