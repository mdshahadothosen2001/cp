/*
Take an integer variable named x and assign x=5.
Now print its memory address like following output-

Memory Address of x is:xxxxxx

*/
#include<stdio.h>

void address()
{
    int x;
    x=5;
    printf("%d",&x);

}

int main()
{

    address();

    return 0;
}
