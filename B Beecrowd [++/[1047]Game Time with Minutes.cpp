//Accepted


#include<iostream>

using namespace std;

int main()
{
    int startHour,startMinute,endH,endM;
    int hora,minuto;

    cin>>startHour>>startMinute>>endH>>endM;


 //calculate hours
    if(startHour<endH)
        hora=(endH-startHour);
    else if(startHour>endH)
        hora=(endH+24)-startHour;
    else if(startHour==endH && startMinute>=endM )
        hora=24;
    else if(startHour==endH && startMinute<=endM)
        hora=0;

//calculate for minutes
    if(startMinute<=endM)
        minuto=endM-startMinute;
    else if(startMinute>endM )
    {
        minuto=(endM+60)-startMinute;
        hora=hora-1;
    }
    cout<<"O JOGO DUROU "<<hora<<" HORA(S) E "<<minuto<<" MINUTO(S)\n";

    return 0;
}
