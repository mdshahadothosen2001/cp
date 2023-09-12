/*
 Write a function which calculates the area of Bangladesh
 National Flag. The function takes only the length of  the
 flag as parameter and returns the area of the flag.
 [Ratio of length and width is- Length:Width=10:6]

*/


#include<stdio.h>

int flagBD(int len)
{
    int area;
    area=len*(len*0.6);
    printf("%d\n",area);
}

int main()
{
    flagBD(10);

    return 0;
}
