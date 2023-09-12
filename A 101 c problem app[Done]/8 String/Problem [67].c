/*
  Take a string as input from the user and
  print the every single character of it into a separate line.
  If user gives "DHAKA", output should look like the following-

  D
  H
  A
  K
  A
*/

#include<stdio.h>
#include<string.h>


void separate()
{
    char word[20];
    int i, len;

    scanf("%s", word);
    len=strlen(word);
    printf("%d\n",len);
    for(i=0; i<len; i++ )
    {

        printf("%c\n",word[i]);
    }



}

int main()
{

    separate();

    return 0;
}
