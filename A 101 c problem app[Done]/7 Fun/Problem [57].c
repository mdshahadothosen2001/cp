/*
Write a function that takes an integer as input
and prints all of its divisors.
Call this function from the main function.


*/

/*

divisors
like divisors of 18: 13,6,..18.
*/

#include<stdio.h>

int divisors(int x)
{
    int i,j;
    for(i=1; i<=x; i++)
    {
        for(j=1; j<=x; j++)
        {
            if(i*j==x)
            {
                printf("%d ",i);
            }
        }


    }

}

int main()
{
    divisors(18);

    return 0;
}
