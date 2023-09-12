//Pushed=>Accepted

#include<iostream>
using namespace std;

void arrPlace();

int main()
{
    arrPlace();


    return 0;
}

void arrPlace()
{
    int i,x,X[10];

    for(i=0; i<10; i++)
    {
        cin>>x;
        if(x>0)
            X[i]=x;
        else
            X[i]=1;
    }
    for(i=0; i<10; i++)
        cout<<"X["<<i<<"] = "<<X[i]<<"\n";
}
