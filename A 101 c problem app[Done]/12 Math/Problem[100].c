/*
TOPIC: Large Prime

Find the largest prime number between 100000 to 500000.

*/
#include<stdio.h>
#include<math.h>

int main()
{
  long int n=500000;
  long int i,j;
  int count;
  long int k=n-100;
  for(i=n;i>k; i--)
  {
      count=0;
      for(j=1; j<=i; j++)
      {
          if(i%j==0)
          {
              count++;
          }
      }
      if(count==2)
      {
          printf("%ld\n",i);
          k=i;
      }
  }


    return 0;
}
