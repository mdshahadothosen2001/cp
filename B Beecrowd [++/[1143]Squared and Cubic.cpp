//PUSHED=>ACCEPTED

#include<iostream>

using namespace std;

void Cubic(int N);

int main()
{
    int N;
    cin>>N;
    Cubic(N);


    return 0;
}

void Cubic(int N)
{
    int i,j;

    for(i=1; i<=N; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==0)
                cout<<i<<" ";
            else if(j==1)
                cout<<i*i<<" ";
            else if(j==2)
                cout<<i*i*i<<"\n";
        }
    }
}


