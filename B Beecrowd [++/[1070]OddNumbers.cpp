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
    int i,top=0;
    for(i=n; ; i++)
    {
        if(i%2!=0)
        {
            top++;
            cout<<i<<"\n";
        }

        if(top==6)
            break;
    }
}
