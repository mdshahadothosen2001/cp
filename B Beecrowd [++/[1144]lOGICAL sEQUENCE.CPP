//PUSHED=>ACCEPTED

#include<iostream>

using namespace std;

void Logic(int N);

int main()
{
    int N;
    cin>>N;
    Logic(N);


    return 0;
}

void Logic(int N)
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
               for(j=0; j<3; j++)
        {

            if(j==0)
                cout<<i<<" ";
            else if(j==1)
                cout<<i*i+1<<" ";
            else if(j==2)
                cout<<i*i*i+1<<"\n";


        }
    }
}



