/*

Write a function named toUpperCase()
which takes small letter alphabet as input
and return the capital version.
If user gives 'a' as parameter the function will return 'A'.


*/

#include<stdio.h>
#include<string.h>

char toUpperCase(char c)
{
    char cha;
    cha=toupper(c);
    return cha;
}


int main()
{
   char ch;
   ch=toUpperCase('a');

   printf("%c",ch);


    return 0;
}
