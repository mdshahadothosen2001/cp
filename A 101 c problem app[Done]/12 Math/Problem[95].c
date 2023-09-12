/*
TOPIC: Day counting

A dog  eats just half of its supply of food in one day.
Write a program that  scans the initial capacity of the
food supply (in kg), and calculate how many days will
pass before the dog eat all the supply food until left
1 kg or less.

*/


#include<stdio.h>
int main()
{
    int i,j,capacity,day;
    float div;
    scanf("%d",&capacity);

   j=1;
   day=1;
   div=capacity;
    for(i=0; i<j; i++)
    {
        div=div/2;
        if(div>=1)
        {
            j++;
            day++;
        }
        else
        {
            j=i;
        }

    }

    printf("%d",day);
    return 0;
}
