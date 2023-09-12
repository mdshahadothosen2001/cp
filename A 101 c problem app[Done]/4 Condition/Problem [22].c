#include<stdio.h>
// input as a character for check vowel or consonant
int main()
{
    char letr;

    char va='a', vA='A';
    char ve='e', vE='E';
    char vi='i', vI='I';
    char vo='o', vO='O';
    char vu='u', vU='U';
    char smi='y',smii='Y';



    printf("Enter a Alphabet for check:");
    scanf("%c",&letr);

    if(letr==va || letr==vA || letr==ve || letr==vE || letr==vi || letr==vI || letr==vo || letr==vO || letr==vu || letr==vU )
    {

        printf("This is Vowel");
    }
    else if(letr==smi || letr==smii)
    {

        printf("This is  semi-Vowel");
    }
    else
        {
            printf("This is consonant");
        }



    return 0;
}
