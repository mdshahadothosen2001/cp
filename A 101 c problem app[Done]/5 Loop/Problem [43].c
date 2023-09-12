/*
Write a program which will display all the prime numbers
between 0 to N (N will be given by the user).

if user gives N=20, your code will print the following output-
    2 3 5 7 11 13 17 19

    */


#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        int c=0;
        for(j=1; j<=i; j++)
        {

            if(i%j==0)
            {
                c++;
            }
        }

       if(c==2)
       {

            printf("%d ",i);
       }
    }


    return 0;
}
