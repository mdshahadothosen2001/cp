/*

Suppose you are going to make a simple calculator.
Your task is prepare four functions
add()
subtract()
multiply()
divide()
Each function takes two parameters and
return the value after applying the corresponding action on
those parameters.

*/


#include<stdio.h>
int add(int x, int y)
{
 int a;
 a=x+y;
 printf("%d\n",a);

}

int subtract(int x, int y)
{
 int b;
 b=x-y;
 printf("%d\n",b);
}

int multiply(int x, int y )
{
  int a;
  a=x*y;
  printf("%d\n",a);
}

int divide( int x, int y)
{
  int a;
  a=x/y;
  printf("%d\n",a);
}


int main()
{

  add(1,3);
  subtract(10, 3);
  multiply(3,3);
  divide(15,3);

    return 0;
}
