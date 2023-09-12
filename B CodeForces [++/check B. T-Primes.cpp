// for Built a logic

#include<iostream>
using namespace std;
void divider(int n);
void divisor(int n);

int main()
{
    int n;
    n=100;
    divider(n);


    return 0;
}

void divider(int n)
{
    int i,j;
    int div,mod,store;

    if(n>1000000)
    {
        for(i=2; i<10000; i++)
        {
           div=n/i;
           mod=n/i;

        }
        for(j=j; j<1000000000000; j++)
        {
            div=n/j;
            mod=n/j;
        }
    }
    /*for(i=2; ; i++)
    {
        div=0;
        div=n%i;
        //n=(n-(n*div));
        cout<<i<<"\n";
        cout<<div<<"\n";
        //cout<<div<<"   "<<n<<"\n";
        if(i==10)
            break;
    }*/
}
