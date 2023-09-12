from collections import Counter
X=int(input())
myList=list(map(int,input().strip().split()))
myDict=dict(Counter(myList).items())
N=int(input())
amount=0
for i in range(N):
    Customer=list(map(int,input().strip().split()))
    c=Customer[0]

    if c in myDict:
        cus=myDict[c]
        if cus>0:
            cus={c:cus-1}
            myDict.update(cus)
            amount=amount+Customer[1]

print(amount)