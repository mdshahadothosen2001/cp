n = int(input())
english = set(map(int, input().split()))

m = int(input())
french = set(map(int, input().split()))

# another statement is 
#total1 = english ^ french
total = english.symmetric_difference(french)

print(len(total))

"""
Sample Input

9
1 2 3 4 5 6 7 8 9
9
10 1 2 3 11 21 55 6 8

Sample Output

8
"""