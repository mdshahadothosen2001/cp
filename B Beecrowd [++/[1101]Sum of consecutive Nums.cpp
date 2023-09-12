//Pushed=>Accepted

#include<iostream>

using namespace std;

void sumSequence();

int main()
{
    sumSequence();


    return 0;
}

void sumSequence()
{
    int i,M,N,j,pag;

    for(i=0; ; i++)
    {
        pag=0;
        cin>>M>>N;
        if(M<=0 || N<=0)
            break;
        else if(M<=N)
        {
            for(j=M; j<=N; j++)
            {
               pag+=j;
               cout<<j<<" ";
            }

        }
        else if(M>N)
        {
            for(j=N; j<=M; j++)
            {
               pag+=j;
               cout<<j<<" ";
            }
        }
        cout<<"Sum="<<pag<<"\n";
    }


}

