from bitarray import bitarray

f = open("signature_test2.bin", "r")
m = bitarray()
counter = 0
m = bitarray()
m.fromfile(f)
print  m[0:240]
print m[240:480]
#while True:
 #   m = bitarray()
  #  m.fromfile(f, 30)
   # if not m:
    #    break
   # print str(m) + "\n"
   # counter += 1
   # print counter
for x in range(0, 6968):
   print m[x * 240 + 238:240 * (x+1)]
