/*

Take two arrays [A and B] of float data type of size 5.
Scan the values of two arrays from user.
Now compare the averages of two arrays and
print the largest average with the array name.

output format: [Avg: 55.55-> A]
*/

#include<stdio.h>
int main()
{
    float c,sum,aveg,sum1,aveg1,A[5], B[5];
    int i;
    sum=0;
    sum1=0;
    c=0;
//Array A
printf("Enter values for Array A\n");
    for(i=0; i<5; i++)
    {
        scanf("%f",&A[i]);

    }
    // Array B
    printf("\nEnter values for Array B\n");
    for(i=0; i<5; i++)
    {
        scanf("%f",&B[i]);

    }
// work for summation of A and B arrays

for(i=0; i<5; i++)
    {
      sum+=A[i];
      sum1+=B[i];
      c++;

    }
    aveg=sum/c;
    aveg1=sum1/c;

    if(aveg>aveg1)
    {
        printf("\nAverage:%.2f -> A ",aveg);
    }
    else
        {
         printf(" \nAverage:%.2f -> B",aveg1);
        }


    return 0;
}


