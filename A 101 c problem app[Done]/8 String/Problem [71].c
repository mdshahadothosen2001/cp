/*
Write a program which will take a sentence as input and
tell us how many words are there. [If user gives input
"I love Bangladesh", then the output should be: 3]



*/


#include<stdio.h>
#include<string.h>

void wordCheck()
{

    char sentence[100];
    int i,c;
    c=1;
    gets(sentence);

    for(i=0; sentence[i]; i++)
    {



       if(sentence[i]==32)
       {

           c++;
       }

    }

    printf("%d",c);




}

int main()
{

    wordCheck();

    return 0;
}
