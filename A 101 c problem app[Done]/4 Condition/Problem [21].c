#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three integer values:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("\n Maximum value is a");
    }
    else if(b>a && b>c)
    {
        printf("\n Maximum value is b");
    }
    else
    {
        printf("\n Maximum value is c");
    }


    return 0;
}
