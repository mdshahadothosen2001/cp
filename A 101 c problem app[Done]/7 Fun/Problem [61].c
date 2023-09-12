/*
Write a function that takes any real number and return its
absolute value. If user gives -5 as parameter the function
will return 5.

*/

#include<stdio.h>
#include<math.h>

int absolute(int x)
{
    return abs(x);
}

int main()
{
    int val,val2;
    val=absolute(-5);
    val2=absolute(-23);
     printf("%d",val);
     printf("\n%d",val2);


    return 0;
}
