/*
Write a currency converter function named "dollarToBDT()".
It takes US Dollar as input in a float variable  and
return the amount of Bangladeshi Taka.
[ Change rate: 1 USD =78.55 BDT]

*/

#include<stdio.h>

int dollarToBDT(int us)
{
    int tk;
    tk=us*78.55;
    printf("Bangladeshi Taka: %d:  \n",tk);

}

int main()
{

    dollarToBDT(205);
    dollarToBDT(450);


    return 0;
}
