//Accepted
#include<iostream>
#include<cstring>
#include<ctype.h>

using namespace std;

int main()
{
    int i,l=0,u=0;
    char w, s[100];
    cin>>s;
    for(i=0; i<strlen(s); i++)
    {
        if(islower(s[i]))
        {
            l++;
        }
        else
        {
            u++;
        }
    }
    if((u>l || (l==strlen(s) && l<50 && l>2) ))
    {
       for(i=0; i<strlen(s); i++)
       {
           w=toupper(s[i]);
           cout<<w;
       }
    }
    else
    {
        for(i=0; i<strlen(s); i++)
       {
           w=tolower(s[i]);
           cout<<w;
       }
    }
cout<<"\n";
    return 0;
}
