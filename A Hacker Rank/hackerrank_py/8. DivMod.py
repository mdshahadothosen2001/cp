# Enter your code here. Read input from STDIN. Print output to STDOUT
a=int(input())
b=int(input())
x=a//b
y=a%b
z=','
print(x)
print(y)
print("({0}{2} {1})".format(x,y,z))