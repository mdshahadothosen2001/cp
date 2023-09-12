//Pushed->Accepted
#include<iostream>
#include<iomanip>
using namespace std;

void weighted(int N);

int main()
{
    int N;
    cin>>N;
    weighted(N);


    return 0;
}

void weighted(int N)
{

    double x1,x2,x3,node;
    int i;
    for(i=0; i<N; i++)
    {
        cin>>x1>>x2>>x3;
        node=((x1*2)+(x2*3)+(x3*5));
        node=(node/10.0);
        cout<<fixed<<setprecision(1);
        cout<<node<<"\n";

    }

}
