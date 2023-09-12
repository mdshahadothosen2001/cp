/*
Find sum and average  of all numbers which are completely
divisible  by 3,5 and 12 between
10-500.
[Like 60 is divisible by all of those]

*/
#include<stdio.h>

int main()
{
    int i,count,sum,avg;
    count=0;


    for(i=10; i<=500; i++)
    {
       if(i%3==0 && i%5==0 && i%12==0)
       {
           printf("%d ",i);
           count++;
           sum+=i;
       }
    }
    avg=sum/count;
    printf("\n Summation of this series: %d",sum);
    printf("\n Average of this series: %d",avg);


    return 0;
}
