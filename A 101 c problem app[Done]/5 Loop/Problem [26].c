#include<stdio.h>
// even number between 1 to 100 using for loop
int main()
{

    int i,even;

    printf("Even number between 1 to 100\n");

    for(i=1; i<=100; i++)
    {

        if(i%2==0)
        {

            printf("%d\n",i);
        }
    }



    return 0;
}
