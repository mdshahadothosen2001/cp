/*
TOPIC: Factorial

Read two numbers A and B from user.
Calculate and print the sum of their factorials.
Be careful, because the result may have  more than 15 digits.

*/


#include<stdio.h>

int main()
{
    int num,num1;
    int i;
    unsigned long long int  m1=1,m2=1,sum;
    num=20;
    num1=10;


    for(i=1; i<=num; i++)
    {
        m1*=i;

    }

    for(i=1; i<=num1; i++)
    {
        m2*=i;

    }
    sum=m1+m2;


    printf("%llu",sum);


    return 0;
}
