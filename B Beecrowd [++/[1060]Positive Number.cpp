//Pushed-> Accepted
#include<iostream>

using namespace std;

void positiveNum();

int main()
{
    positiveNum();
    return 0;
}

void positiveNum()
{
    int node=0;
    double a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(a>0)
        node+=1;
    if(b>0)
        node+=1;
    if(c>0)
        node+=1;
    if(d>0)
        node+=1;
    if(e>0)
        node+=1;
     if(f>0)
            node+=1;

    cout<<node<<" valores positivos\n";

}
