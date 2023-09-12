//Pushed->Accepted
#include<iostream>
using namespace std;

void check(int N);

int main()
{
    int N;
    cin>>N;
    check(N);


    return 0;
}

void check(int N)
{
    int i,X;
    for(i=0;i<N; i++)
    {
        cin>>X;
        if(X==0)
            cout<<"NULL\n";
        else if(X%2==0)
        {
            if(X>0)
                cout<<"EVEN POSITIVE\n";
            else
                cout<<"EVEN NEGATIVE\n";
        }
        else if(X%2!=0)
        {
            if(X>0)
                cout<<"ODD POSITIVE\n";
            else
                cout<<"ODD NEGATIVE\n";
        }

    }


}
