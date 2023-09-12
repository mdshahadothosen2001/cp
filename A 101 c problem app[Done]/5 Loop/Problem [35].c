#include<stdio.h>

int main()
{
    int num,mult,i;
    double sum=0;
     num=5;

     for(i=5; i<=25;i++)
     {
        if(i!=25)
        {
             mult=num*num;
          printf("%d+",mult);
           sum+=mult;
          num++;
        }
        else
        {
             mult=num*num;
          printf("%d",mult);
          sum+=mult;
          num++;

        }

     }

    printf("=%.2f",sum);
    return 0;
}
