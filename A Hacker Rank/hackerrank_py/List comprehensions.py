if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
    elem=[]
    for i in range(x+1):
        for j in range(y+1):
            for p in range(z+1):
                if i+j+p !=n:
                    elem=elem+[[i,j,p]]
    print(elem)                