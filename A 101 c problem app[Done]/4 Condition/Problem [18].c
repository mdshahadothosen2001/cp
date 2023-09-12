#include<stdio.h>

int main()
{
    int age;
    printf("Input your age:");
    scanf("%d",&age);
    if(age>18)
    {
        printf("\nYou can open bank account");

    }
    else
    {
        printf("\nYou can't open bank account, Thank you");

    }

    return 0;
}
