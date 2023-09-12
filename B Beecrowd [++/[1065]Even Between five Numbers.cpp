//Pushed->Accepted
#include<iostream>
using namespace std;

void even();

int main()
{
    even();


    return 0;
}

void even()
{
    int s,o,h,a,n,top=0;
    cin>>s;
    cin>>o;
    cin>>h;
    cin>>a;
    cin>>n;

    if(s%2==0)
    top++;
    if(o%2==0)
        top++;
    if(h%2==0)
        top++;
    if(a%2==0)
        top++;
    if(n%2==0)
        top++;
    cout<<top<<" valores pares\n";
}
