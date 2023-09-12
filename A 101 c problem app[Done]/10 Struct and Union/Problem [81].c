
/*
Create a simple structure named Student that holds the following  variables-

i.   id(integer)
ii.  cgpa(float)
iii. name(string)

Now create an instance of that structure named s1 and
scan  the values from the user.
Finally print the id, cgpa and name which user entered.


*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student{
  int id;
  float cgpa;
  char name[30];
};

int main()
{

    struct student s1;
     printf("Enter Student's Name :");
     scanf("%[^\n]",s1.name);


     printf("Enter Student id of integer data :");
     scanf("%d",&s1.id);

     printf("Enter Student CGPA of Float data :");
     scanf("%f",&s1.cgpa);




    printf("\n%d",s1.id);
    printf("\n%.2f",s1.cgpa);
    printf("\n%s",s1.name);


    return 0;
}
