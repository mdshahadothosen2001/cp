A = set(map(str, input().split()))
n = int(input())
def subset_fun(subset):
    result = True
    for item in subset:
        if item not in A:
            result = False
    return result

for _ in range(n):
    subset = set(map(str, input().split()))
    result = subset_fun(subset)
    if len(A)==len(subset):
        result=False
        break
    if result == False:
        break
print(result)

"""
Sample Input 0

1 2 3 4 5 6 7 8 9 10 11 12 23 45 84 78
2
1 2 3 4 5
100 11 12
Sample Output 0

False
"""