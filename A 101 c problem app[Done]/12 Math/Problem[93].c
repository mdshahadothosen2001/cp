/*
Topic: Angles;

Write a program which will take the length of three sides of a
triangle and print the measures of three angles.


*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159

int main()
{
    int a,b,c;
    float bc,ac,ab,arg,arg1,arg2;
    float radian, radian1, radian2;
    float  degree, degree1, degree2,sum;

    // given as a,b,c : 8,5,10
    scanf("%d%d%d",&a,&b,&c);

    bc=(2*b*c);
    ac=2*a*c;
    ab=2*a*b;


    arg=((b*b+c*c-a*a)/bc);
    arg1=(a*a+c*c-b*b)/ac;
    arg2=(a*a+b*b-c*c)/ab;


// Find radian
    radian=acos(arg);
    radian1=acos(arg1);
    radian2=acos(arg2);


//Find Degree
    degree=radian/(PI/180);
    degree1=radian1/(PI/180);
    degree2=radian2/(PI/180);

// Print three angles of triangle
    printf("\n%.2f",degree);
    printf("\n%.2f",degree1);
    printf("\n%.2f",degree2);


    return 0;
}
