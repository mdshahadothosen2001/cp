/*
arr=[1,2,3,4,5]
display:
arr=[5,4,3,2,1]

Sample Input 0

6
16 13 7 2 1 12
Sample Output 0

12 1 2 7 13 16

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
   int *temp,j;
    temp=(int*) malloc(num * sizeof(int));
    j=0;
   for(i= num-1; i>=0; i--)
    {
      temp[i]=*(arr+j);
       j++;

    }
    j=num-1;
    for(i=0; i<num; i++)
    {

      arr[i]=*(temp+i);
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
