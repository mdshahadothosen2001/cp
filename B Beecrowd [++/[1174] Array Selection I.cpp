//Pushed=>Accepted

#include<iostream>
#include<iomanip>

using namespace std;

void arrSel();

int main()
{
    arrSel();

    return 0;
}

void arrSel()
{
    int i;

    double A[100];
    for(i=0; i<100; i++)
    {
        cin>>A[i];
    }

    for(i=0; i<100; i++)
        if(A[i]<=10)
            cout<<fixed<<setprecision(1)<<"A["<<i<<"] = "<<A[i]<<"\n";
}
