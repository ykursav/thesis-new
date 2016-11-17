import timeit
start = timeit.default_timer()
def calcNum(n):
    print "Calcs started on ", n
    m = n
    for i in range(5000000):
        m += i%25
        if m > n * n:
            m /= 2
    return m

if __name__ == "__main__":
    nums = [12, 25, 76, 38, 8, 2, 5]
    finList = []

    for i in nums:
        return_val = calcNum(i)
        finList.append(return_val)

    print finList
    stop = timeit.default_timer()
    print stop-start

