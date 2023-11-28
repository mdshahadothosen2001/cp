import re
my_list = list(input() for i in range(int(input())))
pattern = re.compile(r'^[7-9]\d{9}$')
for i in my_list:
    if pattern.match(i):
        print("YES")
    else:
        print("NO")

"""
Sample Input

2
9587456281
1252478965
Sample Output

YES
NO
"""
