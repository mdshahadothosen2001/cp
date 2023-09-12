//Pushed->Accepted
#include<iostream>
using namespace std;
void evenSquare(int N);

int main()
{
    int N;
    cin>>N;
    evenSquare(N);


    return 0;
}

void evenSquare(int N)
{
    int i,sq=0;
    for(i=2; i<=N;i++)
    {
        if(i%2==0)
        {
            sq=i*i;
           cout<<i<<"^2 = "<<sq<<"\n";
        }
        i++;
    }
}
