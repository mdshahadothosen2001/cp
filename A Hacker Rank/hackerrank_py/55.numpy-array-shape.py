import numpy

array_elements = list(map(int,input().split()))

numpy_array = numpy.array(array_elements)
numpy_array.shape = (3, 3)
print(numpy_array)

"""
Sample Input

1 2 3 4 5 6 7 8 9
Sample Output

[[1 2 3]
 [4 5 6]
 [7 8 9]]
 """
