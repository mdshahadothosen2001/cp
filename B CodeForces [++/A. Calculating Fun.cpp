//Try++
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,i,fun=0;
    cin>>n;
    for(i=1; i<=n;i++)
    {
        fun+=pow(-1,i)*i;

    }
    cout<<fun<<"\n";
    return 0;
}
