//Pushed->Accepted
#include<iostream>
#include<iomanip>
using namespace std;
void positives();

int main()
{
    positives();


    return 0;
}

void positives()
{
    double i,s,o,h,a,n;
    int stacks=0;
    double sum=0,avg=0;
    cin>>i;
    cin>>s;
    cin>>o;
    cin>>h;
    cin>>a;
    cin>>n;

    if(i>0 || s>0 || o>0 || h>0 || a>0 || n>0)
    {

        if(i>0)
    {
        stacks++;
        sum+=i;
    }

    if(s>0)
    {
        stacks++;
        sum+=s;
    }
    if(o>0)
    {
        stacks++;
        sum+=o;
    }
    if(h>0)
    {
        stacks++;
        sum+=h;
    }
    if(a>0)
    {
        stacks++;
        sum+=a;
    }
    if(n>0)
    {
        stacks++;
        sum+=n;
    }
    avg=(sum/stacks);
    cout<<stacks<<" valores positivos\n";
    cout<<fixed<<setprecision(1)<<avg<<"\n";

    }
}
