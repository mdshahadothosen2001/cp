/*
Write a function that simply prints a message "Hello!! I am from inside of function"
and call the function from main function.
*/
#include<stdio.h>

void message()
{
    printf("Hello!! I am from inside of function\n");
}

int main()
{

    message();
    message();

    return 0;
}
