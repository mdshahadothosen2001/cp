//Pushed=>Accepted

#include<iostream>

using namespace std;

void prime(int N);

int main()
{
    int N;
    cin>>N;
    prime(N);


    return 0;
}

void prime(int N)
{
    int i,j,flag,X;

    for(i=0; i<N; i++)
    {
        flag=0;
        cin>>X;

        for(j=2; j<X; j++)
        {
            if(X%j==0)
            {
                flag=1;
                break;
            }


        }
        if(flag==0)
            cout<<X<<" eh primo\n";
        else
            cout<<X<<" nao eh primo\n";

    }

}
