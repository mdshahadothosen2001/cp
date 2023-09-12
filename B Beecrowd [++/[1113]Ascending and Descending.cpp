//Pushed=>Accepted

#include<iostream>

using namespace std;

void order();

int main()
{
    order();

    return 0;
}

void order()
{
    int i,X,Y;
    for(i=0; ; i++)
    {
        cin>>X>>Y;
        if(X==Y)
            break;
        else if(X<Y)
            cout<<"Crescente\n";
        else if(X>Y)
            cout<<"Decrescente\n";
    }
}


