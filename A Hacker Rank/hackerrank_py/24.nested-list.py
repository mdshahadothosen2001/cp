if __name__ == '__main__':
    List=[]
    for _ in range(int(input())):
        name = input()
        score = float(input())
        List.append([name,score])
    L=len(List)
    List2=[]
    for i in range(L):
        temp=List[i][1]
        List2.append(temp)
    
    MX=max(List2)
    MN=min(List2)
    for i in range(len(List2)):
        if MN==List2[i]:
            List2[i]=MX+100
    SMN=min(List2)
    List3=[]
    for i in range(L):
        if SMN==(List[i][1]):
            List3.append(List[i][0])
        
    List3.sort()
    for i in range(len(List3)):
        print(List3[i])