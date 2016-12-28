from bitarray import bitarray

f = open("signature_test4.txt", "r")
m = bitarray()
while True:
    m.frombytes(f.read())
    print m