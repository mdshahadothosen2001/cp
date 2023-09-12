/*

Take three arrays[A, B and AB] of float data type of size 5.
Scan the values of two arrays [A and B] from user.
Now assign the summation of the  two arrays to the AB.
(AB[i]=A[i]+B[j])

Finally, print the values of AB array.

*/


#include<stdio.h>

int main()
{
    int i;
    float A[5],B[5],AB[5];

    printf("Input as a float data type for A Array: \n");
    for(i=0; i<5; i++)
    {
      scanf("%f",&A[i]);
    }
    printf("\nInput as a float data type for B Array: \n");
    for(i=0; i<5; i++)
    {
      scanf("%f",&B[i]);
    }

    // assign the sumation of A and B
    for(i=0; i<5; i++)
    {
        AB[i]=A[i]+B[i];
    }
//print Values of AB
for(i=0; i<5; i++)
{
    printf("\n%f",AB[i]);
}
    return 0;
}
