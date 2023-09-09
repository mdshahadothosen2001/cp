n, m = map(int, input().split())
bar_column = int(m/2)
bar_row = int(n/2)
line = int((n-1)/2)
welcome = m - 7
welcome = int(welcome/2)
c = 3
for i in range(0,line,1):
    t =1
    b = 2
    c_div = int(c/2)
    c = c+6
    for j in range(m):
        if j >= bar_column-c_div and j <= bar_column+c_div:
            if j == bar_column-c_div or j == bar_column+c_div:
                print('.',end='')
                t = t+1
            elif t == b:
                print('|',end='')
                b = b+3
                t = t+1
            else:
                print('.',end='')
                t = t+1
            
        else:
            print('-',end='')

    print(end='\n')
    
i = line
for j in range(m):
    if i == line:
        if j < welcome:
            print('-',end='')
        elif j >= welcome+7:
            print('-',end='')
        elif (j > welcome or j <= welcome+7):
            if welcome == j:
                print('W',end='')
            if welcome+1 == j:
                print('E',end='')
            if welcome+2 == j:
                print('L',end='')
            if welcome+3 == j:
                print('C',end='')
            if welcome+4 == j:
                print('O',end='')
            if welcome+5 == j:
                print('M',end='')
            elif welcome+6 == j:
                print('E',end='')
    elif i > line:
        if bar_column-1 == j:
            print('.',end='')
        elif bar_column == j:
            print('|',end='')
        elif bar_column+1 == j:
            print('.',end='')
        else:
            print('-',end='')        

print(end='\n')


for i in range(n,line+1,-1):
    t =1
    b = 2
    c = c-6
    c_div = int(c/2)
    for j in range(m):
        
        if j >= bar_column-c_div and j <= bar_column+c_div:
            if j == bar_column-c_div or j == bar_column+c_div:
                print('.',end='')
                t = t+1
            elif t == b:
                print('|',end='')
                b = b+3
                t = t+1
            else:
                print('.',end='')
                t = t+1
            
        else:
            print('-',end='') 
    print(end='\n')
