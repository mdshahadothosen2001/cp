//Pushed=>Accepted

#include<iostream>
#include<iomanip>

using namespace std;

void arrFill(double X);

int main()
{
    double X;
    cin>>X;
    arrFill(X);


    return 0;
}

void arrFill(double X)
{


    double N[100],store;
    int i;


    store=X;
    for(i=0; i<100; i++)
    {
        N[i]=store;
        store=(store/2);

    }

    for(i=0; i<100; i++)
        cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<N[i]<<"\n";
}
