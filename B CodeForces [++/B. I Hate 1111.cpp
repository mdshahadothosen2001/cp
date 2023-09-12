//Push
#include<iostream>
#include<cstring>

using namespace std;

void hate(int t);

int main()
{
    int t;
    cin>>t;
    hate(t);

    return 0;
}

void hate(int t)
{
    int x,div,mod;
    int i;
    for(i=0; i<t; i++)
    {
        cin>>x;
        if(x>=100000000000)
        {
            div=0;
            div=x/111111111111;
            x=x%111111111111;
            if(div==0)
                break;
        }
        if(x>=10000000000)
        {
            div=0;
            div=x/11111111111;
            x=x%11111111111;
            if(div==0)
                break;
        }
        if(x>=1000000000)
        {
            div=0;
            div=x/1111111111;
            x=x%1111111111;
            if(div==0)
                break;
        }
        if(x>100000000)
        {
            div=0;
            div=x/111111111;
            x=x%111111111;
            if(div==0)
                break;
        }
        if(x>10000000)
        {
            div=0;
            div=x/11111111;
            x=x%11111111;
            if(div==0)
                break;
        }
        if(x>1000000)
        {
            div=0;
            div=x/1111111;
            x=x%1111111;
            if(div==0)
                break;
        }
         if(x>100000)
        {
            div=0;
            div=x/111111;
            x=x%111111;
            if(div==0)
                break;
        }
        if(x>10000)
        {
            div=0;
            div=x/11111;
            x=x%11111;
            if(div==0)
                break;
        }
        if(x>1000)
        {
            div=0;
            div=x/1111;
            x=x%1111;
            if(div==0)
                break;
        }
        if(x>100)
        {
            div=0;
            div=x/111;
            x=x%111;
            if(div==0)
                break;
        }
        if(x>10)
        {
            div=0;
            div=x/11;
            x=x%11;
            if(div==0)
                break;
        }


        if(x==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }



}

