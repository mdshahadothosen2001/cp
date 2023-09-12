#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,i,mod,limit,dif,fac;
    char k[20];
    cin>>n>>k;

    fac=n;;
    limit=strlen(k);
    mod=n%limit;
    dif=0;


    for(i=0; i<1000; i++)
    {
        dif=n-limit;
        fac=fac*dif;
        n=dif;

        if(dif==mod)
        {
            break;
        }

    }
    cout<<fac<<endl;
    return 0;
}
