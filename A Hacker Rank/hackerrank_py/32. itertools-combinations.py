from itertools import combinations

s , k  = input().split()

for i in range(1, int(k)+1):
    for j in combinations(sorted(s), i):
        print(''.join(j))

"""
Sample Input:
HACK 2

Sample Output:

A
C
H
K
AC
AH
AK
CH
CK
HK
"""
