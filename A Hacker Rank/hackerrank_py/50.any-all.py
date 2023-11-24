n, elements = int(input()), list(map(int, input().split()))
positive = all(x > 0 for x in elements)
palindromic = [num for num in elements if str(num) == str(num)[::-1]]; print('True') if positive and palindromic else print('False')


"""
Sample Input

5
12 9 61 5 14 
Sample Output

True

Explanation

Condition 1: All the integers in the list are positive.
Condition 2: 5 is a palindromic integer.
"""
