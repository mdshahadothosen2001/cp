//Pushed=>Accepted

#include<iostream>

using namespace std;

void fib(int N);

int main()
{
    int N;
    cin>>N;
    fib(N);


    return 0;
}

void fib(int N)
{
    int i,line[N];
    line[0]=0;
    line[1]=1;
    for(i=0; i<N; i++)
    {

        if(i==0 || i==1)
            cout<<i<<" ";

        if(i>1)
        {
            line[i]=line[i-1]+line[i-2];

            if(i!=N-1)
                cout<<line[i]<<" ";
            else
                cout<<line[i]<<"\n";

        }

    }
}
