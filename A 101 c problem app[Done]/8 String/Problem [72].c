/*
A string is palindrome if it seems same from the both side.
Like "ABA", "XXYXX", "M" all are palindromes and
"XY" is not palindrome. Now write a program which will
take a string as input from the user and print "YES,
IT is a palindrome" if  it satisfies the condition
otherwise print "No, It is not palindrome".


*/

#include<stdio.h>
#include<string.h>

void palindrome()
{

     char name[50];

    int i=0;
    scanf("%s",name);
    int j=strlen(name)-1;




    while(j>i)
    {


        if(name[i++]!=name[j--])
        {
            printf("NO, It is not palindrome");
            return;
        }


    }



        printf("YES, It is palindrome");


}

int main()
{

    palindrome("AMA");
    return 0;
}
