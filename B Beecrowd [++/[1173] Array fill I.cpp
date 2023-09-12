//Push

#include<iostream>

using namespace std;

void arrFill(int X);

int main()
{
    int X;
    cin>>X;

    arrFill(X);


    return 0;
}

void arrFill(int X)
{
    int i,N[10];

    for(i=0; i<10; i++)
    {
        N[i]=X;
        X=(X+X);
    }
    for(i=0; i<10; i++)
        cout<<"N["<<i<<"] = "<<N[i]<<"\n";
}
