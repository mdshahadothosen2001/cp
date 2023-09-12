import textwrap

def wrap(string, max_width):
    L=len(string)
    New=''
    for i in range(max_width,L,max_width):
        New=New+string[i-max_width:i]+'\n'
    New=New+string[i:]
    return New
#ABCDEFGHIJKLIMNOQRSTUVWXYZ
if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)