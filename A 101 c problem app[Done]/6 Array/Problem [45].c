/*
Say you are given the following array of integer data type
[-99,45,100,37,89,-327,245]. Now write program which will
find the biggest integer and print the integer
with its index.
*/

#include<stdio.h>
int main()
{
    int row,col,arr[10][10];
    int max,lenth,lenth2;
    lenth=1;
    lenth2=7;
// integer input from user
    for(row=0; row<lenth; row++)
    {
        for(col=0; col<lenth2; col++)
        {
            scanf("%d",&arr[row][col]);
        }

    }

//find max value
// suppose max[0][0] is max

max=arr[0][0];
    for(row=0; row<lenth; row++)
    {
        for(col=0; col<lenth2; col++)
        {

            if(arr[row][col]>max)
            {
                max=arr[row][col];
            }
        }

    }
    printf("\n Maximum value is: %d ",max);

    return 0;
}

