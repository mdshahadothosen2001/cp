//Pushed=>Accepted

#include<iostream>

using namespace std;

void Growing(int N);

int main()
{
    int i,N;

    for(i=0; ; i++)
    {
        cin>>N;

        if(N!=0)
            Growing(N);
        else if(N==0)
            break;
    }


    return 0;
}

void Growing(int N)
{
    int i;

    for(i=1; i<=N; i++)
    {
        if(i==N)
            cout<<i<<"\n";
        else
            cout<<i<<" ";
    }
}

