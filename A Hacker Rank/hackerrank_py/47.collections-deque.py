from collections import deque

n = int(input())
deque_elements = deque()

def append(value):
    deque_elements.append(value)

def appendleft(value):
    deque_elements.appendleft(value)

def clear():
    deque_elements.clear()

def pop():
    deque_elements.pop()

def popleft():
    deque_elements.popleft()

def remove(value):
    deque_elements.remove(value)

def reverse():
    deque_elements.reverse()

def rotate(value):
    deque_elements.rotate(value)

def extend(value):
    deque_elements.extend(value)

def extendleft(value):
    deque_elements.extendleft(value)

def count(value):
    return deque_elements.count(value)

operations = {
    'append': append,
    'appendleft': appendleft,
    'clear': clear,
    'pop': pop,
    'popleft': popleft,
    'remove': remove,
    'reverse': reverse,
    'rotate': rotate,
    'extend': extend,
    'extendleft': extendleft,
    'count': count
}

for time in range(n):
    user_input = input()
    if ' ' in user_input:
        operation, value_str = user_input.split()
        value = int(value_str) if value_str.isdigit() else value_str
        # Check if the operation is valid
        if operation in operations:
            # Call the corresponding function with the provided value
            operations[operation](value)
    else:
        if user_input in operations:
            operations[user_input]()

print(*deque_elements)



"""
sample input:
6
append 1
append 2
append 3
appendleft 4
pop
popleft
Sample Output:

1 2
"""
