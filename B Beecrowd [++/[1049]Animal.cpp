//Accepted

#include<iostream>
#include<cstring>

using namespace std;

void animal();

int main()
{
    animal();


}

void animal()
{
    string oneW;
    string twoW;
    string threeW;
    cin>>oneW;
    cin>>twoW;
    cin>>threeW;


    if(oneW=="vertebrado" && twoW=="ave" && threeW=="carnivoro")
        cout<<"aguia\n";
    else if(oneW=="vertebrado" && twoW=="ave" && threeW=="onivoro")
            cout<<"pomba\n";
    else if(oneW=="vertebrado" && twoW=="mamifero" && threeW=="onivoro")
        cout<<"homem\n";
    else if(oneW=="vertebrado" && twoW=="mamifero" && threeW=="herbivoro")
        cout<<"vaca\n";
    else if(oneW=="invertebrado" && twoW=="inseto" && threeW=="hematofago")
        cout<<"pulga\n";
    else if(oneW=="invertebrado" && twoW=="inseto" && threeW=="herbivoro")
        cout<<"lagarta\n";
    else if(oneW=="invertebrado" && twoW=="anelideo" && threeW=="hematofago")
            cout<<"sanguessuga\n";
    else if(oneW=="invertebrado" && twoW=="anelideo" && threeW=="onivoro")
        cout<<"minhoca\n";











}
