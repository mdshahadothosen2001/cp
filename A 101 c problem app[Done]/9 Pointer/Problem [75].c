/*
Take two pointer variables of integer type named pX and
pY. Now take another two variables of integer data type
named x and y.
Assign x=100 and  y=200.
Assign the address of x to pX and Address of y to pY.
Print the values of x and y using pX and pY.

*/

#include<stdio.h>

int addressAssign()
{

    int x,y;
    x=100;
    y=200;
    int *pX=&x;
   int *pY;
   pY=&y;

   printf(" pX :%d",*pX);
   printf("\n pY %d",*pY);


}

int main()
{
    addressAssign();

    return 0;
}
