/*
Create a text file in your computer and write a paragraph
about INTERNET on that file. Then write a program which
will open that file and print the whole paragraph into console.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL, *fp1=NULL;

    char para[5000]="Internet is a system of PC frameworks that have been associated with one another utilizing standard correspondence conventions. The web offers access to an enormous volume of valuable and helpful data. Web tasks started when the US Department of Defense associated a few PCs through optical link systems. These systems likewise utilized satellites for transmission of information to faraway places. Both Government and private associations give the Internet administration.";
    int i;
    char pr;

    fp=fopen("90.txt", "w+" );
    fp1=fopen("90.txt", "r" );
    if(fp==NULL)
    {
        printf("\nError\n");
        exit(1);

    }
    for(i=0; i<strlen(para); i++)
    {

        fputc(para[i],fp);

    }
    rewind(fp);

     while(! feof(fp1))
     {
          pr=getc(fp1);
          printf("%c",pr);
     }
   printf("\n\nSuccessfully DOne\n\n");

   fclose(fp);

    return 0;
}
