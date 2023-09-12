/*

Create a structure named TanisBall where we have two fields-
color(string) and weight(float).
Now create a pointer variable of structure TanisBall named myBall.
Scan the field values for myBall from user and finally print
the information of myBall using that pointer variable myBall.


*/


#include<stdio.h>
#include<string.h>

struct TanisBall{
char color[30];
float weight;

};


int main()
{


     struct TanisBall myVal;



    printf("Enter color:");
    scanf("%s",myVal.color);

    printf("\nEnter Weight:");
    scanf("%f",&myVal.weight);

    struct TanisBall *myBall;
    myBall=&myVal;


    printf("\n%s",myBall->color);
    printf("\n%.2f",myBall->weight);



    return 0;
}
