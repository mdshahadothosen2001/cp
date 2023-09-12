/*
Take an array of string named fruitNames and store four fruit
names("Mango","Jack-Fruit", "Banana","Litchi").
Now iterate the array using loop and print the names of the
fruit each in a separate line.


*/

#include<stdio.h>
int main()
{
     char str[4][10]={"Mango","Jack-Fruit", "Banana","Litchi"};


    int i;
    for(i=0; i<4;i++)
    {
       printf("%s\n",str[i]);
    }




    return 0;
}
