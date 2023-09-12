/*
Write a program which takes a string of alphabet as input and
replace all the characters with the 3rd immediate character of it.
All the alphabets of the input string will be small letter.
[If user gives input "abc" you should print "def",
 if user gives input "xyz" you should print "abc"]


*/

#include<stdio.h>

void replace()
{
    char s[50];
    int  i,len;
     gets(s);
     len=strlen(s);
    for(i=0; i<=len; i++)
	{
		if(s[i]=='a')
		{
		   s[i]='d';

	    }
	    else if( s[i]=='b')
        {
            s[i]='e';
        }
        else if(s[i]=='c')
        {

            s[i]='f';
        }
        else if(s[i]=='x')
        {
            s[i]='a';
        }
        else if(s[i]=='y')
        {
            s[i]='b';
        }
        else if(s[i]=='z')
        {

            s[i]='c';
        }

	}

    printf("\n%s",s);


}


int main()
{

    replace();

    return 0;
}
