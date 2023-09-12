/*
Write a function that takes an integer as input and prints
EVEN if the number is divisible by 2
otherwise  prints ODD.
Call this function from the main function.



*/
#include<stdio.h>
 int myFun(int x)
 {
   if(x%2==0)
   {

       printf("EVEN\n");
   }
   else
    {
        printf("ODD\n");
    }
 }


 int main()
 {

     myFun(2);
     myFun(9);

     return 0;
 }
