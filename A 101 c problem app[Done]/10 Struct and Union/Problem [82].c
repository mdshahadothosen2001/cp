/*
Create a simple structure named Book that holds the following data fields-
i.   id(integer)
ii.  title(string)
iii. author(string)
 Now book create two structure variables of Book type
 named book1 and book2. Set the following for the books-

 For book1:
 id:101
 title: C Programming Hand Note
 author:  Mukla C

 For book2:
 id: 102
 title: Programming with Fun
 author: Joy Billah

 finally, print all the information of the two books.
*/


#include<stdio.h>
#include<string.h>

struct Book{
int id;
char title[30];
char author[30];

};

int main()
{
    struct Book book1={101,"C Programming Hand Note", "Mukla C" };
     struct Book book2={102,"Programming with Fun", "Joy Billah" };




    printf("Book1\n");
    printf("  %d",book1.id);
    printf("\n  %s",book1.title);
    printf("\n  %s",book1.author);

    printf("\n\nBook2\n");
    printf("    %d",book2.id);
    printf("\n    %s",book2.title);
    printf("\n    %s\n",book2.author);
    return 0;
}
