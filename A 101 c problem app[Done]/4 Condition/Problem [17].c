
#include<stdio.h>

int main()
{
    float mark;
    printf("Enter your mark:");
    scanf("%f",&mark);
    if(80<=mark && mark<=100)
    {
        printf("\nA+");
    }
    else if(70<=mark && mark<=79)
    {
        printf("\nA");
    }
    else if(60<=mark && mark<=69)
    {
        printf("\nA-");
    }
    else if(50<=mark && mark<=59)
    {
        printf("\nB");
    }
    else if(40<=mark && mark<=49)
    {

        printf("\nC");
    }
    else if(33<=mark && mark<=39)
    {
        printf("\nD");
    }
    else if(0<=mark && mark<33)
    {
       printf("\nF");
    }



    return 0;
}
