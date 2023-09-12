//Pushed=>Accepted

#include<iostream>

using namespace std;

void summa(int N);

int main()
{
    int N;
    cin>>N;
    summa(N);

    return 0;
}

void summa(int N)
{
    int i,j;
    for(i=0; i<N; i++)
    {
        int X,Y,s=0;
        cin>>X>>Y;
        for(j=0; ; j++)
        {
            if(X%2!=0)
            {
                Y--;
                s+=X;
            }
            X++;
            if(Y==0)
                break;

        }
        cout<<s<<"\n";

    }
}

