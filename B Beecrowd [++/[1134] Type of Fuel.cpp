//Pushed=>Accepted

#include<iostream>

using namespace std;

void Fuel();

int main()
{
    Fuel();


    return 0;
}

void Fuel()
{
    int X,i,Alcohol,Gosoline,Diesel;


    Alcohol=0;
    Gosoline=0;
    Diesel=0;

    for(i=0; ; i++)
    {
        cin>>X;
        if(X==1)
            Alcohol++;
        else if(X==2)
            Gosoline++;
        else if(X==3)
            Diesel++;
        else if(X==4)
            break;
    }


    cout<<"MUITO OBRIGADO\n";
    cout<<"Alcool: "<<Alcohol<<"\n";
    cout<<"Gasolina: "<<Gosoline<<"\n";
    cout<<"Diesel: "<<Diesel<<"\n";

}


