/*
TOPIC: Binary
Take a decimal number as input and
print binary verson of that number.


*/

#include<stdio.h>

int main()
{
    int i,j,k,dec,mod,div;
    int bin[8];
    scanf("%d",&dec);
    j=1;
    div=dec;

    for(i=0; i<j;i++)
    {
         j++;
         mod=div%2;
         bin[i]=mod;
         div=div/2;
         if(div==0)
         {
             j=i;
         }
    }

//LSB
    for(k=i-1; k>=0; k--)
    {

        printf("%d",bin[k]);

    }



    return 0;
}
