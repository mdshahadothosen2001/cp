//Pushed

#include<iostream>

using namespace std;

void event();

int main()
{
    event();

    return 0;
}


void event()
{
    int Dia,Dia1;
    int startH,startM,startC;
    int endH,endM,endC;
    int node=0,hour=0,minu=0,sec=0;


    cin>>Dia;
    cin>>startH;
    cin>>startM;
    cin>>startC;


    cin>>Dia1;
    cin>>endH;
    cin>>endM;
    cin>>endC;

    if(Dia1>Dia)
        node=(Dia1-Dia)-1;

    if(endH<startH)
    {
        hour=(endH+24)-startH;
        if(hour>=24)
        {
            node+=1;
            hour-=24;
        }
    }
    else if(startH==endH && endH!=0)
    {
        node+=1;

    }
    else
    {
        hour=endH-startH;
        if(hour>=24)
        {
            node+=1;
            hour-=24;
        }
    }

    minu=endM-startM;

    sec=endC-startC;

    cout<<node<<" dia(s)\n";
    cout<<hour<<" hora(s)\n";
    cout<<minu<<" minuto(s)\n";
    cout<<sec<<" segundo(s)\n";
}

