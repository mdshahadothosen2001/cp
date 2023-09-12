/*

Take a two dimensional array of integer data type
of size [3*3]. Take the values from the user using scanf().
Now print the average of all values.

*/
#include<stdio.h>
int main()
{
    int i,j,num[3][3];
    int sum,aveg, c=0;
   sum=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d %d: ",i,j);
           scanf("%d",&num[i][j]);
        }

        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            sum+=num[i][j];
            c++;

        }


    }
aveg=sum/c;
printf("\n%d",aveg);


    return 0;
}
