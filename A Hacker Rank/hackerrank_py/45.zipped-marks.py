n,x = map(int, input().split())

marks = []

for _ in range(x):
    separate_marks = list(map(float, input().split()))
    marks += [separate_marks]

k = 0
results = []
for outer_index in range(n):
    results += [0]
    for inner_index in range(x):
        results[outer_index] += marks[inner_index][outer_index]

for result in results:
    avg = result/x
    print('%.1f' %avg)



"""
Sample Input

5 3
89 90 78 93 80
90 91 85 88 86  
91 92 83 89 90.5
Sample Output

90.0 
91.0 
82.0 
90.0 
85.5 
"""
