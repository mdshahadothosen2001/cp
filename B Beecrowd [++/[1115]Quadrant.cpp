//Pushed

#include<iostream>

using namespace std;

void quadrant();

int main()
{
    quadrant();


    return 0;
}

void quadrant()
{

    int i,X,Y;
    for(i=0; ;i++)
    {
        cin>>X>>Y;
        if(X==0 || Y==0)
            break;
        else if(X>0 && Y>0)
            cout<<"primeiro\n";
        else if(X>0 && Y<0)
            cout<<"quarto\n";
        else if(X<0 && Y<0)
            cout<<"terceiro\n";
        else if(X<0 && Y>0)
            cout<<"segundo\n";
    }

}

