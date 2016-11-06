import time

def loop_tries():
    sum = 0
    for x in xrange(0, 100000):
        sum += x

start_time = time.time()
loop_tries()
end_time = time.time()
print end_time - start_time