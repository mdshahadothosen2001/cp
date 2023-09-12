//Pushed->Accepted
#include<iostream>
using namespace std;
void even(int s,int o,int h,int a,int n);
void odd(int s,int o,int h,int a,int n);
void positive(int s,int o,int h,int a,int n);
void negative(int s,int o,int h,int a,int n);

int main()
{
    int s,o,h,a,n;
    cin>>s>>o>>h>>a>>n;
    even(s,o,h,a,n);
    odd(s,o,h,a,n);
    positive(s,o,h,a,n);
    negative(s,o,h,a,n);

    return 0;
}

void even(int s,int o,int h,int a,int n)
{
    int top=0;
    if(s%2==0)
        top++;
    if(o%2==0)
        top++;
    if(h%2==0)
        top++;
    if(a%2==0)
        top++;
    if(n%2==0)
        top++;
    cout<<top<<" valor(es) par(es)\n";

}
void odd(int s,int o,int h,int a,int n)
{
    int top=0;
    if(s%2!=0)
        top++;
    if(o%2!=0)
        top++;
    if(h%2!=0)
        top++;
    if(a%2!=0)
        top++;
    if(n%2!=0)
        top++;

    cout<<top<<" valor(es) impar(es)\n";
}
void positive(int s,int o,int h,int a,int n)
{
    int top=0;
    if(s>0)
        top++;
    if(o>0)
        top++;
    if(h>0)
        top++;
    if(a>0)
        top++;
    if(n>0)
        top++;

    cout<<top<<" valor(es) positivo(s)\n";
}

void negative(int s,int o,int h,int a,int n)
{
    int top=0;
    if(s<0)
        top++;
    if(o<0)
        top++;
    if(h<0)
        top++;
    if(a<0)
        top++;
    if(n<0)
        top++;

    cout<<top<<" valor(es) negativo(s)\n";
}
