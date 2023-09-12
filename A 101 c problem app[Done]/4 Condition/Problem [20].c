#include<stdio.h>

int main()
{

    int num;
    printf("Enter integer number:");
    scanf("%d",&num);
    if(num%3==0 && num%5==0)
    {
        printf("\n Yes");
    }
    else
    {
        printf("\n No");
    }

    return 0;
}
