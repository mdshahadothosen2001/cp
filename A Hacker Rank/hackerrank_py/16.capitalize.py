# only needs def solve fun
def solve(s):
    L=len(s)
    for i in range(0,L):
        if i==0:
            s1=(s[0]).upper()
        elif(s[i]!=' ') and (s[i-1]==' '):
            s1=s1+(s[i].upper())
        else:
            s1=s1+s[i]
    return s1

s = input()
print(solve(s))
