/*

Let's take a string and you have to find how many alphabets are there
and their repetitions.Case sensitive
Ex. Input:Output:
AaaBBc

A(1) B(2) c(3)

*/

#include<stdio.h>
#include<string.h>

void caseSensitive()
{

    char ch[30];
    gets(ch);

    int i,j,count;

    for( i=0; ch[i]!='\0'; i++)
    {
            count=1;
            for( j=i+1;ch[j]!='\0';j++)
            {
              if(ch[i]==ch[j] || toupper(ch[i])==ch[j] ||tolower(ch[i])==ch[j])
              {
                   count++;
                   ch[j]= 32;

              }

            }

            if(ch[i]!=32)
            {
                 printf(" %c ( %d)\n",ch[i],count);

            }


    }

}



int main()
{
    caseSensitive();


    return 0;
}
