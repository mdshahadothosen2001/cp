//Pushed

//Summing Consecutive Integer

#include<iostream>

using namespace std;

void summing(int A,int N);

int main()
{
    int A,N;
    cin>>A;
    NN:
        cin>>N;
    if(N<=0)
            goto NN;
    summing(A,N);


    return 0;
}

void summing(int A,int N)
{
    int i,node;
    node=A;
    for(i=N; i>0; i--)
    {
        node+=N;

    }

    cout<<node<<"\n";
}



