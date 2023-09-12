//Pushed=>Accepted

#include<iostream>

using namespace std;

void Exceeding(int X,int Z);

int main()
{
    int X,Z;

    cin>>X;
    ReadZ:
    cin>>Z;
    if(X>=Z)
        goto ReadZ;
    Exceeding(X,Z);

    return 0;
}

void Exceeding(int X,int Z)
{
    int i,reg=0,time=0;

    for(i=X; ;i++)
    {
        reg+=i;
        time++;

        if(reg>Z)
            break;

    }
    cout<<time<<"\n";
}



