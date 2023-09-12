//Pushed=Accepted

#include<iostream>

using namespace std;

void arrCha();

int main()
{
    arrCha();


    return 0;
}

void arrCha()
{
    int i,X,Y,N[20];

    for(i=0; i<20; i++)
        cin>>N[i];

    for(i=0; i<10; i++)
    {
        X=N[i];
        N[i]=N[19-i];
        N[19-i]=X;

    }

    for(i=0; i<20; i++)
        cout<<"N["<<i<<"] = "<<N[i]<<"\n";
}
