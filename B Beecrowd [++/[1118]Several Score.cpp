//Pushed=>Accepted

#include<iostream>
#include<iomanip>

using namespace std;

void score();

int main()
{
    int X,i;
    score();

    for(i=0; ; i++)
    {
        cout<<"novo calculo (1-sim 2-nao)\n";
        cin>>X;
        if(X==1)
            score();
        else if(X==2)
            break;
    }
    return 0;
}

void score()
{
    double a,b,node;
    ab:
        cin>>a;
        if(a<0 || a>10)
            {
                cout<<"nota invalida\n";
                goto ab;
            }
    ba:
        cin>>b;
        if(b<0 || b>10)
            {
                cout<<"nota invalida\n";
                goto ba;
            }
        node=(a+b)/2;
        cout<<fixed<<setprecision(2);
        cout<<"media = "<<node<<"\n";

}



