/*
Take a word from user and print the word in reverse order.
[If user gives "BANGLADESH", your program should print
"HSEDALGNAD"]


*/

#include<stdio.h>
#include<string.h>

void reverse()
{
    char name[30];
    int i, len;

    scanf("%s",name);
    len=strlen(name);


    for(i=len; i>=0; i--)
    {
        printf("%c",name[i]);
    }

}

int main()
{

    reverse();

    return 0;
}
