//Pushed=>Accepted

#include<iostream>

using namespace std;

void divisors(int N);

int main()
{
    int N;
    cin>>N;
    divisors(N);

    return 0;
}

void divisors(int N)
{
    int i;
    for(i=1; i<=N; i++)
    {
        if(N%i==0)
            cout<<i<<"\n";
    }
}
