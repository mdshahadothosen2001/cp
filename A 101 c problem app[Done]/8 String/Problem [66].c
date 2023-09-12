/*
Find the length of a given string.
[If user gives input "LovE",
you should print: 4]


*/
#include<stdio.h>
#include<string.h>


void lenCheck()
{
 char str[50];
 int len;
 scanf("%s",str);

 len=strlen(str);

 printf("%d",len);

}

int main()
{
    lenCheck();

    return 0;
}
