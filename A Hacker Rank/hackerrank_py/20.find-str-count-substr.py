def count_substring(string, sub_string):

    result=0;
    P=len(sub_string)
    L=(len(string)-P+1)
    for i in range(L):
            flag=0;
            for j in range(P):
                if string[i+j]==sub_string[j]:
                    flag=flag+1;
                if flag==len(sub_string):
                    result=result+1
    return result
if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)