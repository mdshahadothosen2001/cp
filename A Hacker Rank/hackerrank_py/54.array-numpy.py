import numpy

def arrays(arr):
    # complete this function
    # use numpy.array
    float_array = numpy.array(arr,float)
    reversed_array = numpy.flip(float_array)
    return reversed_array

arr = input().strip().split(' ')
result = arrays(arr)
print(result)


"""
Sample Input

1 2 3 4 -8 -10
Sample Output

[-10.  -8.   4.   3.   2.   1.]
"""