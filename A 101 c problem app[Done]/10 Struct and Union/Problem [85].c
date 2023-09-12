/*
Create a structure named Product with following two fields-

1.name(string)
2.price(double)

Then create a function named printProductInfo()
which takes a parameter of product type and print
the information of that Product.
Finally, in main function create a variable of structure
Product named myProduct and call the printProductInfo() function passing
myProduct as the parameter.

*/

#include<stdio.h>
#include<string.h>


struct Product{
char name[30];
double price;

};


void printProductInfo(char name[], double price)
{

    printf("\n%s",name);
    printf("\n%.2f",price);



}

int main()
{
    struct Product myProduct={"Formal Black Suit set",30.500};


    printProductInfo(myProduct.name, myProduct.price);

    return 0;
}
