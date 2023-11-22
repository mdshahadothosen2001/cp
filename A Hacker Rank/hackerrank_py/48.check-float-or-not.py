import re

def is_valid(s):
    try:
        float_value = float(s)
        return True
    except ValueError:
        return False
def check_simble(s):
    if '.' in s:
        if '+' in s:
            return True
        elif '-' in s:
            return True 
        else:
            return True
    else:
        return False

t = int(input())
for _ in range(t):
    s = input()
    if check_simble(s) and is_valid(s):
        print('True')
    else:
        print('False')

"""
Sample Input 0

4
4.0O0
-1.00
+4.54
SomeRandomStuff

Sample Output 0

False
True
True
False
"""
