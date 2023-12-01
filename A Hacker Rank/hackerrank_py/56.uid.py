import re

n = int(input())

def check_is_valid(uid):
    pattern = re.compile(r"[A-Za-z0-9]+")
    upper_case = sum([c.isupper() for c in uid])
    number = sum([c.isnumeric() for c in uid])
    repeated_char = len(set(uid)) == len(uid)
    if (pattern.fullmatch(uid) is not None) and (upper_case > 1 and number >2 and len(uid) == 10 and repeated_char):
        print('Valid')
    else:
        print('Invalid')

for _ in range(n):
    uid = input()
    check_is_valid(uid)


"""
Sample Input

2
B1CD102354
B1CDEF2354
Sample Output

Invalid
Valid
"""
