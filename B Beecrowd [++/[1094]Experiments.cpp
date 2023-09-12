//Pushed->Accepted
#include<iostream>
#include<iomanip>

using namespace std;

void animals(int N);

int main()
{
    int N;
    cin>>N;
    animals(N);

    return 0;
}
void animals(int N)
{
    int i,Animals,Coelho,Rato,Sapo;
    double total,per1,per2,per3;
    char ch;
    Coelho=0;
    Rato=0;
    Sapo=0;
    for(i=0; i<N; i++)
    {
        cin>>Animals>>ch;
        if(ch=='C' || ch=='c')
            Coelho+=Animals;
        else if(ch=='R' || ch=='r')
            Rato+=Animals;
        else if(ch=='S' || ch=='s')
            Sapo+=Animals;

    }

    total=Coelho+Rato+Sapo;
    per1=(Coelho/total)*100.00;
    per2=(Rato/total)*100.00;
    per3=(Sapo/total)*100.00;

    cout<<"Total: "<<total<<" cobaias\n";
    cout<<"Total de coelhos: "<<Coelho<<"\n";
    cout<<"Total de ratos: "<<Rato<<"\n";
    cout<<"Total de sapos: "<<Sapo<<"\n";

    cout<<"Percentual de coelhos: ";
    cout<<fixed<<setprecision(2)<<per1<<" %\n";
    cout<<"Percentual de ratos: ";
    cout<<fixed<<setprecision(2)<<per2<<" %\n";
    cout<<"Percentual de sapos: ";
    cout<<fixed<<setprecision(2)<<per3<<" %\n";

}

