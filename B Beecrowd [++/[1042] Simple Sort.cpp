#include<iostream>
using namespace std;

int main()
{
    int a,b,c,sm=0,lg=0;
    cin>>a>>b>>c;

    if(a<b && a<c)
        sm=a;
    else if(b<a && b<c)
        sm=b;
    else
        sm=c;

    if(a>b && a>c)
            lg=a;
    else if(b>a && b>c)
            lg=b;
    else
        lg=c;
    if(sm<a && a<lg)
        cout<<sm<<"\n"<<a<<"\n"<<lg<<"\n";
    else if(sm<b && b<lg)
        cout<<sm<<"\n"<<b<<"\n"<<lg<<"\n";
    else
        cout<<sm<<"\n"<<c<<"\n"<<lg<<"\n";

        cout<<"\n";
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n";


    return 0;
}
