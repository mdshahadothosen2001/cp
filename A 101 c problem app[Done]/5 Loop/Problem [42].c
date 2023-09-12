/* Write a program to produce the following output using loop-
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
6 12 18 24 30 36

*/
#include<stdio.h>
int main()
{
    int row,col,k;

    for(row=1; row<=6; row++)
    {

        for(col=1; col<=row; col++)
        {
           k=row*col;
            printf(" %d ",k);

        }
        printf("\n");
    }

    return 0;
}

