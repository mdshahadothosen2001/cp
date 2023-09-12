#include<stdio.h>
/*print the numbers between 100 to 200 which are completely divisible by 3 and 5 */
int main()
{
    int i;
    printf("Output:");

    for(i=100; i<=200; i++)
    {

        if(i%3==0 && i%5==0)
        {
            printf("\n %d",i);
        }
    }


    return 0;
}
