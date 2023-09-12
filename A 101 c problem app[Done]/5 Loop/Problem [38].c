/* write a program which will take an integer N as input from user
and print Fibonacci series up to N. If user gives input n=15,
you should print.
 0 1 1 2 3 4 5 8 13
*/

#include<stdio.h>

int main()
{
    int i,n ;
    int sum[50];
    sum[0]=0;
    sum[1]=1;


    scanf("%d",&n);

    printf("%d %d",sum[0], sum[1]);
    for(i=2; i<=n; i++)
    {
        sum[i]=sum[i-1]+ sum[i-2];

       if(sum[i]<15)
       {
            printf(" %d",sum[i]);
       }
    }


    return 0;
}

