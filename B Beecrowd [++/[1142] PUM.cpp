//PUSHED=>ACCEPTED

#include<iostream>

using namespace std;

void PUM(int N);

int main()
{
    int N;
    cin>>N;
    PUM(N);


    return 0;
}

void PUM(int N)
{
    int i,j,rear=1;

    for(i=0; i<N; i++)
    {
        for(j=0; j<4; j++)
        {

            if(j<3 )
                cout<<rear<<" ";
            else if(j==3)
                cout<<"PUM"<<"\n";

           rear++;
        }
    }

}



