// Push
#include<iostream>
using namespace std;
int main()
{
    int N,i,Register=0;
    cin>>N;
    int X[N];
    for(i=0; i<N; i++)
    {
        cin>>X[i];
    }
    for(i=0; i<N; i++)
    {
        if(X[i]>=10 && 20>=X[i])
            Register++;
    }
    cout<<Register<<" in\n";
    cout<<N-Register<<" out\n";

    return 0;
}
