def FindIndex(S,L):
    if(S[L-2]==' ') and (S[L-4]==' '):
        x=int(S[L-3])
        return (x)
    elif(S[L-3]==' ') and (S[L-5]==' '):
        x=int(S[L-4])
        return (x)
    elif(S[L-3]==' ') and (S[L-6]==' '):
        x=int((S[L-4])+(S[L-4]))
        return (x)         

def FindElem(S,L):
    if(S[L-2]==' '):
        y=int(S[L-1])
        return (y)
    elif(S[L-3]==' '):
        y=int((S[L-2])+(S[L-1]))
        return (y)  
  
    
if __name__ == '__main__':
    N = int(input())
    List=[]
    for i in range(N):
        takes=input()
        L=len(takes)
        if 'insert' in takes:
            x=FindIndex(takes,L)
            y=FindElem(takes,L)
            List.insert(x,y)
        if 'print' in takes:
            print(List)
        if 'remove' in takes:
            y=FindElem(takes,L)
            List.remove(y)
        if 'append' in takes:
            y=FindElem(takes,L)
            List.append(y)
        if 'sort' in takes:
            List.sort()
        if 'pop' in takes:
            List.pop()
        if 'reverse' in takes:
            List.reverse()

    
    