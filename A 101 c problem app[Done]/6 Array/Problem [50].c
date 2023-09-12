/*

Take a two dimensional array of integer data type of size [3*3].
Take the values from  the user using scanf().
Now print the summation of the  values of diagonal elements
like the following  one [1+5+9=15]-

123
456
789

*/

#include<stdio.h>
int main()
{
    int i,j,c,sum,num[3][3];
    sum=0;
    c=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
         if(i==j)
         {

             sum+=num[i][j];
             c++;
         }
        }
    }
   printf("\n%d ",sum);
    return 0;
}
