/*
3 = 00000011 (In Binary)
5 = 00000101 (In Binary)

AND operation        OR operation        XOR operation
  00000011             00000011            00000011
& 00000101           | 00000101          ^ 00000101
  ________             ________            ________
  00000001  = 1        00000111  = 7       00000110  = 6

Print the maximum values for the and, or and xor comparisons, each on a separate line.
2<=n<10^3
2<=k<=n

if user given 5 4
    output
    2
    3
    3

    explain: s={1,2,3,4,5,6,7,8,9,...};
             k=4 all possible value {2,3,4,5};
Now compare these like all possible value
n=1; k=2; n&k=0; n|k=3; n xor k=3;
n=1; k=3; n&k=1; n|k=3; n xor k=2;
n=1; k=4; n&k=0; n|k=5; n xor k=5;
n=1; k=5; n&k=1; n|k=5; n xor k=4;

n=2; k=3; n&k=2; n|k=3; n xor k=1;
n=2; k=4; n&k=0; n|k=6; n xor k=6;
n=2; k=5; n&k=0; n|k=7; n xor k=7;

n=3; k=4; n&k=0; n|k=7; n xor k=7;
n=3; k=5; n&k=1; n|k=7; n xor k=6;

n=4; k=5; n&k=4; n|k=5; n xor k=1;

stop here because there are no compare value for k
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,and,or,xor,max,max1,max2;
  max=0;
  max1=0;
  max2=0;
  for(i=1; i<=k;i++)
  {
        for(j=i+1; j<=n; j++)
         {
            and=i&j;
             if(and>max && and<k)
             {
                 max=and;
             }
             or=i|j;
             if(or>max1 && or<k)
             {
                 max1=or;
             }
             xor=i^j;
             if(xor>max2 && xor<k)
             {
                 max2=xor;
             }
        }
  }
  printf("%d\n",max);
  printf("%d\n",max1);
  printf("%d",max2);
}

int main() {
    int n, k;

    scanf("%d%d",&n,&k);
    calculate_the_maximum(n,k);

    return 0;
}
