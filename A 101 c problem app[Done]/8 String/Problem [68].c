/*
  Take three different string as input from user
  ( "WE", "Love" and "Bangladesh").
  Now concate these  three string and
  print it ( "We Love Bangladesh").
  [Three is leading space in "Love" and "Bangladesh"]

*/


#include<stdio.h>
#include<string.h>

void love()
{
    char first[]="We";
    char mid[]=" Love";
    char last[]=" Bangladesh";


    strcat(first,mid);
    strcat(first,last);
    printf("%s",first);
}

int main()

{
    love();


    return 0;
}

