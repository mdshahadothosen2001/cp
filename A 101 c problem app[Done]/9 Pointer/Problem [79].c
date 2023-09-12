/*
Write down the output of the following program without running-
#include<stdio.h>
int main()
{
char *str="Bangladesh";
printf("%c %c %c",*str, *(str+3),*(str+4));

return 0;
}

Memory Address of x is: XXXXXX

*/


#include<stdio.h>
 int main()
 {
  char *str="Bangladesh";
  printf("%c %c %c",*str, *(str+3),*(str+4));

  return 0;
}
