/*
11
12 21
123 321
1234 4321
12345 54321

 */

#include<stdio.h>


int main()
{
    int m,j,i,k,a=1;

    k=2;
    for(i=0; i<k; i++)
    {
        printf("%d",a);
    }

    printf("\n");


    for(j=0; j<4; j++)
    {
       if(j<2)
       {
           printf("%d",a);
           a++;
       }
       else
       {

           a--;
           printf("%d",a);

       }
    }

    printf("\n");

    for(m=0; m<6; m++)
    {

       if(m<3)
       {
           printf("%d",a);
           a++;
       }
       else
       {
           a--;
           printf("%d",a);
       }
    }


     printf("\n");

    for(m=0; m<8; m++)
    {

       if(m<4)
       {
           printf("%d",a);
           a++;
       }
       else
       {
           a--;
           printf("%d",a);
       }
    }

     printf("\n");

    for(m=0; m<10; m++)
    {

       if(m<5)
       {
           printf("%d",a);
           a++;
       }
       else
       {
           a--;

           printf("%d",a);
       }
    }

    return 0;
}
