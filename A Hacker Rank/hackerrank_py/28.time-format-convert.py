##Just def timeConversion(s): needs for HackerRank
def timeConversion(s):
    # Write your code here
    flag=0
    for i in range(len(s)):
        if (s[i]=='A') and (s[i+1]=='M'):
            flag=0
            break
        if (s[i]=='P') and (s[i+1]=='M'):
            flag=1
            break
    
    temp=int(s[0]+s[1])    
    if(flag==0):
        
        if((temp)<12):
            return(s[:8])
        elif((temp)>=12):
            s='0'+'0'+s[2:8]
            return(s)    
    if(flag==1):
        if((temp)<12):
            temp=str(temp+12)
            s=temp+s[2:8]
            return(s) 
        elif((temp)>=12):
            return(s[:8])   
                



s = input()
print(timeConversion(s))