/*

Create a structure named Writer with two fields-
name(string) and genre(string).
Then create an array of Writer named writerRecords
into the array-

i.   name-Mukla.C; genre-Technical
ii.  name-Mostasim Billah; genre-Technical
iii. name-Mahady Joy; genre-Technical

Finally, print the records of the array by iterating the array using loop.



*/

/*
structure value declare-simple:

struct myStructure s1;

for two variables:
    struct myStructure s1;
    struct myStructure s2;

    or
    struct myStructure s1 s2;

*/



#include<stdio.h>
#include<string.h>

struct Writer{
char name[30];
char genre[30];


};

int main()
{

    struct Writer writerRecords[3];
    strcpy(writerRecords[0].name, "Mukla.C" );
    strcpy(writerRecords[0].genre, "Technical" );

    strcpy(writerRecords[1].name, "Mostasim Billah" );
    strcpy(writerRecords[1].genre, "Technical" );

    strcpy(writerRecords[2].name, "Mahady Joy" );
    strcpy(writerRecords[2].genre, "Technical" );


    for(int i=0; i<3; i++)
    {

        printf("%s\n",writerRecords[i].name);
        printf("%s\n",writerRecords[i].genre);
        printf("\n");
    }



    return 0;
}
