/*
Write a program to calculate the nearest integer number
of the square root value of a number.
User will give the number as input.
Your program  will find the root value of that number and
print the nearest integer of that value.

*/

#include<stdio.h>
#include<math.h>


int main()
{
    double n,sq;
    int rou;
    scanf("%lf",&n);
    sq=sqrt(n);
    rou= round(sq);
    printf("%d",rou);




return 0;
}
