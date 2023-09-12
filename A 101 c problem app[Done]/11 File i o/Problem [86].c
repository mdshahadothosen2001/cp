/*
Write a program that opens a file named myFile.txt
on write mode and write 100(integer) into that file.


*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    int n=100;


    fp=fopen("myFile.txt","w");
    if(fp==NULL)
    {
        printf("\nError\n");
        exit(1);
    }

   fprintf(fp,"%d",n);

    fclose(fp);

    return 0;
}
