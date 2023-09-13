# Enter your code here. Read input from STDIN. Print output to STDOUT
from decimal import Decimal
T = int(input())

for i in range(T):
    a, b = input().split()
    
    try:
        x = int(int(a)/int(b))
        print(x)
    except ZeroDivisionError as e:
        print( "Error Code: integer division or modulo by zero")
    except ValueError as e:
        print( "Error Code:",e)

"""
sample input:
    3
    1 0
    2 $
    3 1
sample output:
    Error Code: integer division or modulo by zero
    Error Code: invalid literal for int() with base 10: '$'
    3
"""