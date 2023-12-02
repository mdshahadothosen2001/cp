import numpy

a = list(map(float, input().strip().split()))

floor_of_a = numpy.floor(a)
ceil_of_a = numpy.ceil(a)
rint_of_a = numpy.rint(a)

floor_of_a = numpy.array(floor_of_a)
ceil_of_a = numpy.array(ceil_of_a)
rint_of_a = numpy.array(rint_of_a)

numpy.set_printoptions(legacy='1.13')

print(floor_of_a)
print(ceil_of_a)
print(rint_of_a)

"""Sample Input

1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9
Sample Output

[ 1.  2.  3.  4.  5.  6.  7.  8.  9.]
[  2.   3.   4.   5.   6.   7.   8.   9.  10.]
[  1.   2.   3.   4.   6.   7.   8.   9.  10.]"""