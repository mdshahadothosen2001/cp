/*
Create a text file in your completer and write 10 integers in 10
separate lines. Now write a program which will open the file
and read and that 10 integers.
Finally print the average of that ten integers.

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL, *fp1=NULL;
    int n,x,y=1;
    int sum=0, avg=0;
    fp=fopen("89.txt","w");
    fp1=fopen("89.txt","r");
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


    for(n=1; n<=10;n++)
    {

        fprintf(fp,"%d\n",n);

    }
    rewind(fp);
    for(n=1; n<=10;n++)
    {

       fscanf(fp1,"%d",&x);
       printf("%d  ",x);
       sum+=x;

     y++;

    }

   avg=sum/y;
  printf("\n%d",avg);



 fclose(fp);
 fclose(fp1);

    return 0;
}

