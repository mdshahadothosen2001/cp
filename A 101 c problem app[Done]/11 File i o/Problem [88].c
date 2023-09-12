/*
Write a program which will create a file named myFile.txt
and write "We LovE" on that file . Then read the file and
print the text of that file into console.
Finally, append "our Country" with the previous text of that file and
print the whole text again into console.

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL, *fp1=NULL, *fp2=NULL,*fp3=NULL;
    char we[30]="We LovE";
    char p[30];
    char ap[]=" Our Country";
    char ch[50];

    fp=fopen("myFile.txt","w");
    fp1=fopen("myFile.txt","r");
    fp2=fopen("myFile.txt","a");
    fp3=fopen("myFile.txt","r");
    if(fp==NULL)
    {
        printf("\nError\n");
        exit(1);
    }
    if(fp1==NULL)
    {
        printf("\nError1\n");
        exit(1);
    }
    if(fp2==NULL)
    {
        printf("\nError2\n");
        exit(1);
    }
    if(fp3==NULL)
    {
        printf("\nError3\n");
        exit(1);
    }

//write fp
    fputs(we,fp);

    //read fp1
    rewind(fp);
    fgets(p,30,fp1);
    printf("%s",p);

    fclose(fp);
    fclose(fp1);

    //Append fp2
    fputs(ap,fp2);

     fclose(fp2);

     rewind(fp2);
    // Read with fp3
     //rewind(fp2);
    fgets(ch,50,fp3);
    printf("\n%s",ch);


    fclose(fp3);

    return 0;
}
