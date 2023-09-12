#include<iostream>
using namespace std;

int main()
{

    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int a=0,b=0;
        cin>>a>>b;
        a+=b;
        cout<<"Case "<<i<<": "<<a<<"\n";
    }

    return 0;
}
