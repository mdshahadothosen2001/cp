/*

Take a array of integer data type of size 10. Get input
from user and store the values in the array and finally
print the sum of those 10 integers.

*/

#include<stdio.h>

int main()
{
    int row,col,arr[10][10];
    for(row=0; row<1; row++)
    {
      for(col=0; col<10; col++)
      {
          scanf("%d",&arr[row][col]);
      }
    }

    for(row=0; row<1; row++)
    {
      for(col=0; col<10; col++)
      {
          printf("\n%d",arr[row][col]);
      }
    }


    return 0;
}
