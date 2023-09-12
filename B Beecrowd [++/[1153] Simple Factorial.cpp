//Pushed=>Accepted

#include<iostream>

using namespace std;


int fact(int N);

int main()
{
    int N,Factorial=0;

    cin>>N;
    Factorial=fact(N);
    cout<<Factorial<<"\n";


    return 0;
}

int fact(int N)
{
    if(N>1)
        return (N*fact(N-1));
    else
        return 1;
}


