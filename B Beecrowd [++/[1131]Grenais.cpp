//Pushed=>Accepted

#include<iostream>

using namespace std;

void grenais();

int main()
{
    grenais();

    return 0;
}

void grenais()
{
    int i,X,Y,in,gre,em,nov;
    in=0;
    gre=0;
    em=0;

    cin>>X>>Y;
    if(X>Y)
        in++;
    else if(X<Y)
            gre++;
    else if(X==Y)
        em++;


    for(i=0; ; i++)
    {
        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>nov;
        if(nov==1)
        {
            cin>>X>>Y;
             if(X>Y)
              in++;
             else if(X<Y)
              gre++;
             else if(X==Y)
              em++;

        }
        else if(nov==2)
            break;
    }


    cout<<i+1<<" grenais\n";
    cout<<"Inter:"<<in<<"\n";
    cout<<"Gremio:"<<gre<<"\n";
    cout<<"Empates:"<<em<<"\n";
    cout<<"Inter venceu mais\n";




}




