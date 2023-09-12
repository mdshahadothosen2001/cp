/*
input int n;
sum between n to 1;
like input -3 sum=(-3) + (-2) + (-1) + 0 + 1
              sum=5

another like input 3 then sum= 3+2+1
                          sum=6
*/

#include <stdio.h>
int main()
{
   int i,n,sum=0;
   scanf("%d",&n);
   if(n>0)
   {
       for(i=n; i>=1; i--)
       {
           sum+=i;

       }
       printf("%d",sum);
   }
   else if(n<1)
   {
       for(i=n; i<=1; i++)
       {
           sum+=i;

       }
       printf("%d",sum);
   }


    return 0;
}
