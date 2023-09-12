//Pushed Accepted
#include<iostream>

using namespace std;

void sumOdd(int N);
void Loop(int X,int Y);

int main()
{
    int N;
    cin>>N;
    sumOdd(N);


    return 0;
}

void sumOdd(int N)
{
    int i,X,Y,j,node;
    for(i=0; i<N; i++)
    {
        cin>>X>>Y;

            if(X<=Y)
        {
            node=0;
            for(j=X+1; j<Y; j++)
            {
                if(j%2!=0)
                    node+=j;
            }
            cout<<node<<"\n";
        }
        else if(X>Y)
        {
             node=0;
            for(j=Y+1; j<X; j++)
            {
                if(j%2!=0)
                    node+=j;
            }
            cout<<node<<"\n";
        }
    }
}
