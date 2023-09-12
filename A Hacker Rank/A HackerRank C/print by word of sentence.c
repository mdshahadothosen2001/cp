/*
User given a sentence
we should print word by word in separate line
sample input:
 This is c
 sample output:
 This
 is
 c
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int i, len;
    len=strlen(s);

   for(i=0; i<len; i++)
   {
       if( *(s+i)!=32)
       {
           printf("%c",*(s+i));
       }
       else
       {
           printf("\n");
       }

   }




    return 0;
}
