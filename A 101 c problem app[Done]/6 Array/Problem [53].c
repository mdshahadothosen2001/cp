/*

You are given the following array of integers-
[1,23,10,15,17,21,44,43,53].
Now write a program which will print the prime numbers with its index.

*/

#include<stdio.h>
int main()
{
    int i,j,n,num;
    int arr[9]={1,23,10,15,17,21,44,43,53};


    for(i=0; i<=8; i++)
    {
        num=arr[i];
        int c=0;
        for(j=1; j<=num; j++)
        {

            if(num%j==0)
            {
                c++;
            }
        }

       if(c==2)
       {

            printf("%d ",num);
       }
    }


    return 0;
}
