//Push->Accepted
#include<iostream>
using namespace std;

void remainder(int N);

int main()
{
    int N;
    cin>>N;
    remainder(N);


    return 0;
}

void remainder(int N)
{
    int i;
    for(i=2;i<=10000;i++)
    {
        if(i%N==2)
            cout<<i<<"\n";
    }
}
