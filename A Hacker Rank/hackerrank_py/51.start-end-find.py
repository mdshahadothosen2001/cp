s = input()
k = input()

start = 0
time = 0
for _ in range(len(s)):
    start = s.find(k,start)
    if start == -1:
        break
    end = start + len(k) - 1
    print(f'({start}, {end})')

    start += 1
    time += 1

if start == -1 and time ==0:
    print("(-1, -1)")
 

"""
Sample Input

aaadaa
aa
Sample Output

(0, 1)  
(1, 2)
(4, 5)
"""
