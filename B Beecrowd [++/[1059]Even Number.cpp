//Pushed->Accepted
#include<iostream>

using namespace std;

void evenNum(int s,int n);
int main()
{
    evenNum(1,100);


    return 0;
}

void evenNum(int s,int n)
{

    for(int i=s; i<=n; i++)
    {
      if(i%2==0)
        cout<<i<<"\n";
    }
}
