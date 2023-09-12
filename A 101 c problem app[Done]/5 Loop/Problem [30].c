/* write a program which will print summation of the given series
 101+99+97+......+3+1 */
#include<stdio.h>

int main()
{
    int i,sum=0;

    for(i=101; i>=1; i-- )
    {
        sum+=i;

        printf("\n%d",i);
        i--;
    }

    printf("\n Summation of this series : %d",sum);


    return 0;
}

