def print_formatted(number):
    # your code goes here
    for i in range(1,number+1):
        print(str(i).rjust(len(bin(number)[2:])),oct(i)[2:].rjust(len(bin(number)[2:])),hex(i)[2:].upper().rjust(len(bin(number)[2:])),bin(i)[2:].rjust(len(bin(number)[2:])),sep=" ")

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)