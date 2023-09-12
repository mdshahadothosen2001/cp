#include<iostream>
#include<cmath>
using namespace std;

int bankNotes(int x );

void bankCoins(int y);



int main()
{
    double N;
    int convert;
    cin>>N;

    //Call function -> Deal for digit before decimal point
    convert=floor(N);
    convert=bankNotes(convert);


    // Call fun for coins
    N=N-convert;
    N=N*1000;
    int n;
    n=ceil(N);
    bankCoins(n);



    return 0;
}





int bankNotes(int x )
{
    int notos,ret=0;

     cout<<"NOTAS:"<<endl;
    notos=x/100;
    ret+=notos*100;
    x=x%100;
    cout<<notos<<" nota(s) de R$ 100.00"<<endl;


    notos=x/50;
    ret+=notos*50;
    x=x%50;
    cout<<notos<<" nota(s) de R$ 50.00"<<endl;


    notos=x/20;
    ret+=notos*20;
    x=x%20;
    cout<<notos<<" nota(s) de R$ 20.00"<<endl;


    notos=x/10;
    ret+=notos*10;
    x=x%10;
    cout<<notos<<" nota(s) de R$ 10.00"<<endl;


    notos=x/5;
    ret+=notos*5;
    x=x%5;
    cout<<notos<<" nota(s) de R$ 5.00"<<endl;


    notos=x/2;
    ret+=notos*2;
    x=x%2;
    cout<<notos<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;

    notos=x/1;
    ret+=notos*1;
    x=x%1;
    cout<<notos<<" moeda(s) de R$ 1.00"<<endl;

    return ret;
}


void bankCoins(int y)
{

    int coin;
    coin=y/500;
    y=y%500;
    cout<<coin<<" moeda(s) de R$ 0.50"<<endl;

    coin=y/250;
    y=y%250;
    cout<<coin<<" moeda(s) de R$ 0.25"<<endl;

    coin=y/100;
    y=y%100;
    cout<<coin<<" moeda(s) de R$ 0.10"<<endl;

    coin=y/50;
    y=y%50;
    cout<<coin<<" moeda(s) de R$ 0.05"<<endl;


    coin=y/10;
    cout<<coin<<" moeda(s) de R$ 0.01"<<endl;
}
