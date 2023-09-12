#Push

def Check_Integer (N):
    # Write your code here
    x=int(N)
    print(int(x))
    if (N.isdecimal()==True):
        return "True"
    else:
        return "False"    
    pass

T = int(input())
for _ in range(T):
    N = input()

    out_ = Check_Integer(N)
    print (out_)
