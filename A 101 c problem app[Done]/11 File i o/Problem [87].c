/*
Write a program which will delete all the text from a text
file and write "LOVE" on that file.
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;

    char name[]="LOVE";
    fp=fopen("forRemove.txt","w");

    if(fp==NULL)
    {

        printf("\nError\n");
        exit(1);
    }

   fputs(name,fp);


    fclose(fp);
    return 0;
}
