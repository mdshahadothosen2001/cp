//Pushed

// Sum of consecutive odd numbers

#include<iostream>

using namespace std;

void sum(int x, int y);

int main()
{
    int X,Y;
    cin>>X>>Y;
    sum(X,Y);


    return 0;
}

void sum(int x, int y)
{
    int i,registers=0;
    if(x==y)
        cout<<0<<"\n";
    if(x<y)
    {
        for(i=x+1; i<y; i++)
        {
            if(i%2!=0)
              registers+=i;
        }
        cout<<registers<<"\n";
    }
    if(x>y)
    {
        for(i=y+1; i<x; i++)
            if(i%2!=0)
            registers+=i;

        cout<<registers<<"\n";
    }
}
