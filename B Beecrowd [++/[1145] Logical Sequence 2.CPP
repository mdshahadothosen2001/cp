//Pushed=>Accepted

#include<iostream>

using namespace std;

void Logic(int X,int Y);

int main()
{
    int X,Y;
    cin>>X>>Y;
    Logic(X,Y);


    return 0;
}

void Logic(int X,int Y)
{
    int i,node;

    node=X;
    for(i=1; i<=Y; i++)
    {
        if(i==node)
        {
            cout<<i<<"\n";
            node=node+X;
        }
        else
            cout<<i<<" ";
    }
}


