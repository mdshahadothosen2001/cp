//Pushed=>Accepted

#include<iostream>
#include<iomanip>

using namespace std;

void divide(int N);

int main()
{
    int N;
    cin>>N;
    divide(N);

    return 0;
}

void divide(int N)
{
    int i,X,Y;
    double node=0;

    for(i=0; i<N; i++)
    {
        cin>>X>>Y;
        if(Y!=0)
        {
            double temp=Y;
            node=X/temp;
            cout<<fixed<<setprecision(1);
            cout<<node<<"\n";
            continue;
        }
        else
        {
            cout<<"divisao impossivel\n";
        }
    }
}
