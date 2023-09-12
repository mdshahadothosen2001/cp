//Pushed=>Accepted

#include<iostream>


using namespace std;

void lowest(int N);

int main()
{
    int N;
    cin>>N;
    lowest(N);


    return 0;
}

void lowest(int N)
{

    int X[N],i,L,P=0;


    for(i=0; i<N; i++)
    {

        cin>>X[i];
    }

    L=X[0];
    for(i=1; i<N; i++)
        {

            if(L>X[i])
            {
                L=X[i];
                P=i;
            }
        }

     cout<<"Menor valor: "<<L<<"\n";
     cout<<"Posicao: "<<P<<"\n";

}

