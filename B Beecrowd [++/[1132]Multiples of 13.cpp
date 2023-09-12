//Pushed=>Accepted

#include<iostream>

using namespace std;

void sum13(int X,int Y);

int main()
{
    int X,Y;
    cin>>X;
    cin>>Y;
    sum13(X,Y);

    return 0;
}

void sum13(int X,int Y)
{
    int i,node=0;

    if(X<=Y)
    {
        for(i=X; i<=Y; i++)
        {
            if(i%13!=0)
            {

                node+=i;
            }
        }
    }
    else if(X>Y)
    {
        for(i=Y; i<=X; i++)
        {
            if(i%13!=0)
                node+=i;
        }
    }

    cout<<node<<"\n";
}



