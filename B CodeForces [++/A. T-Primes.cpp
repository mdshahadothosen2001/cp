// Pushed.1.

#include<iostream>

using namespace std;

int divisors(int n);

int main()
{
    int n,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        x=divisors(x);
        if(x==3)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }


    return 0;
}

int divisors(int n)
{
    int i,count=1;
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
        if(count>3)
            break;

    }
    return count;
}
