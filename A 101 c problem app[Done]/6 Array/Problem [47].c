/*
Take a array of integer data type of size 5.
Scan the values from the user.
Now print the average of integers which are greater than 100.

*/

#include<stdio.h>

int main()
{
   int i,sum,aveg,num[5];
   int count=0;
   sum=0;

   for(i=0; i<5; i++)
   {

       scanf("%d",&num[i]);
   }
   for(i=0; i<5; i++)
   {
       if(num[i]>100)
       {
           sum+=num[i];
           count++;
       }
   }

aveg=sum/count;
printf("%d",aveg);

    return 0;
}
