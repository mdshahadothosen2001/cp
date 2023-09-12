/*

*****
 ***
  *
 ***
*****

*/

#include<stdio.h>

int main()
{
    int i,j,k,m;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<i; j++)
        {
            if(i%2 !=0)
            {
                printf(" ");
            }
        }

         for(j=5; j>=i; j--)
        {
            if(i%2 !=0)
            {
                printf("* ");
            }
        }



        printf("\n");
    }
 // 2nd part of ..

 printf("\n  ");

 for(k=0; k<2; k++)
 {
     if(k==0)
     {
         for(m=0; m<3; m++)
         {
             printf("* ");
         }
     }
     else
     {
         for(m=0; m<5; m++)
         {
             printf("* ");
         }
     }
     printf("\n\n");
 }


    return 0;
}
