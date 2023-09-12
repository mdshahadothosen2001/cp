/*

Write a function named finMax().
It takes three parameters and return the maximum value
among the three parameters.
Call this function from the main function.

*/

#include<stdio.h>

int findMax(int x, int y, int z)
{


    if(x>y && x>z)
    {
        printf("%d",x);
    }
    else if(y>x && y>z)
    {
        printf("%d",y);
    }
    else
    {

        printf("%d",z);
    }

}

int main()
{
    findMax(6,8,19);

    return 0;
}
