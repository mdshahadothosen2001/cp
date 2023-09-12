if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    li=list(arr)
    m=max(li)
    for i in range(n):
        if m==li[i]:
            li[i]=-7777
    
    sm=max(li)        
    print(sm)