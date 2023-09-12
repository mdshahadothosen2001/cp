//Pushed=>Accepted

#include<iostream>

using namespace std;

void perfect(int N);

int main()
{
    int N;
    cin>>N;
    perfect(N);

    return 0;
}

void perfect(int N)
{
    int i,j,perN,X;

    for(i=0; i<N; i++)
    {
        cin>>X;
        perN=0;

        for(j=1;  ;j++)
        {
            perN+=j;

            if(perN==X && X>1)
            {
                cout<<X<<" eh perfeito\n";
                break;
            }
            else if(perN>X)
            {
                cout<<X<<" nao eh perfeito\n";
                break;
            }
        }
    }
}
