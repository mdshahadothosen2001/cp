/* write a program which will take an integer  N from user and
 print all the numbers between N to -32.
Stop your program when user will give N= -1 as input */
#include<stdio.h>

int main()
{
    int i,n;

    printf("Enter integer number: ");
    scanf("%d",&n);
   for(i=n; i>= -32; i--)
   {
    printf("\n%d",n);
    n--;
   }


    return 0;
}

