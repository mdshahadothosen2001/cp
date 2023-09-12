//Pushed->Accepted
#include<iostream>
using namespace std;

void mult(int N);

int main()
{
    int N;
    cin>>N;
    mult(N);


    return 0;
}
void mult(int N)
{
    int i;
    for(i=1; i<=10; i++)
    {
        cout<<i<<" x "<<N<<" = "<<i*N<<"\n";
    }
}
