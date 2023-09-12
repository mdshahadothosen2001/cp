/*
TOPIC: GCD
Greatest common divisor

Write a program which will find the greatest
common divisor of two  numbers.
If user gives
input 5 and 30, your output should be 5.

*/

#include<stdio.h>

int main()
{
    int a,b,div,div1,c,k,gcd=0;
scanf("%d%d",&a,&b);
    int i,j,divisor[100],divisor1[100];
    c=0;
    k=0;
    for(i=2; i<=a;i++)
    {
        if(a%i==0)
        {
            divisor[c]=i;

            c++;

        }
    }

    for(i=2; i<=b;i++)
    {
        if(b%i==0)
        {
            divisor1[k]=i;

            k++;

        }
    }


for(i=0; i<c;i++)
{
    for(j=0;j<k;j++)
    {
     if(divisor[i]==divisor1[j])
     {
         gcd=divisor[i];
     }
    }
}
printf("%d",gcd);
    return 0;
}

