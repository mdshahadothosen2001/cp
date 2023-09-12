//Push->Accepted
#include<iostream>
using namespace std;

void odd(int n);

int main()
{
    int X;
    cin>>X;
    odd(X);



    return 0;
}

void odd(int n)
{

    int i;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
            cout<<i<<"\n";
    }
    i++;

}
