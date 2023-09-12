/*
Take an integer variable named VAR and Assign VAR=500.
Take a pointer variable named *ptr of integer type and
assign the address  of VAR to ptr.

Then take a another pointer to pointer variable named **pptr of integer type
and assign the address  of pointer variable ptr to pptr.
Now print the value  of VAR  using VAR, ptr, pptr
respectively in three different lines.

Memory Address of x is: XXXXXX
*/

#include<stdio.h>
int main()
{
    int VAR;
    VAR=500;
    int* ptr;
    ptr=&VAR;
     int **pptr;
     pptr=&ptr;




    printf("\n%d\n",VAR);

    printf("\n%d\n",*ptr);
;
    printf("\n%d",**pptr);




    return 0;
}
