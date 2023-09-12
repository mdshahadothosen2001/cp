//Pushed->Accepted
#include<iostream>

using namespace std;

void position();

int main()
{
    position();

    return 0;
}

void position()
{
    int i,n,highest,pos=0;
    n=100;
    int num[n];

    for(i=0; i<n; i++)
    {
        cin>>num[i];
    }

    highest=num[0];
    for(i=0; i<n; i++)
    {
     if(num[i]>highest)
        {
            highest=num[i];
            pos=i+1;
        }
    }
    cout<<highest<<"\n";
    cout<<pos<<"\n";
}
