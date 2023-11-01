n = int(input())
s = set(map(int, input().split()))
N = int(input())

def last_word(instruction):
    for i in range(len(instruction)-1, -1, -1):
        if instruction[i] == ' ':
            value = int(instruction[i+1:])
            return value


for _ in range(N):
    instruction = input()
    if 'pop' in instruction:
        s.pop()
    elif 'remove' in instruction:
        value = last_word(instruction)
        if value in s:
            s.remove(value)
    else:
        value = last_word(instruction)
        if value in s:
            s.discard(value)
    
print(sum(s))

"""
Sample Input

9
1 2 3 4 5 6 7 8 9
10
pop
remove 9
discard 9
discard 8
remove 7
pop 
discard 6
remove 5
pop 
discard 5
Sample Output

4
"""