testcase = int(input())
for _ in range(testcase):
    element_size = input()
    A = map(str, input().split())
    element_size = input()
    B = map(str, input().split())
    A = set(A)
    B = set(B)
    result = A.issubset(B)
    print(result)
"""
Sample Input

3
5
1 2 3 5 6
9
9 8 5 6 3 2 1 4 7
1
2
5
3 6 5 4 1
7
1 2 3 5 6 8 9
3
9 8 2
Sample Output

True 
False
False
"""