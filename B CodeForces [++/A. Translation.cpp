//Accepted
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int i,j;
    char s[100],t[100];
    cin>>s>>t;
    j=strlen(t)-1;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]!=t[j--])
        {
            j=1;
            break;
        }
    }
if(j==1)
{
    cout<<"NO\n";
}
else
    cout<<"YES\n";
    return 0;
}

