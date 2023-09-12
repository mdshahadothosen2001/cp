/*
12345
1234
123
12
1

*/

#include<stdio.h>

int main()
{
  int i,j,var;


   for(i=1; i<=5; i++)
   {
       var=1;
       for(j=5; j>=i; j--)
       {

           printf("%d",var);
           var++;
       }
       printf("\n");
   }


    return 0;
}
