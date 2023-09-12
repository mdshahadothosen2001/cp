//Accepted

#include<iostream>

using namespace std;

int main()
{
    int start,endtime;
    cin>>start>>endtime;
    if(start==endtime)
        cout<<"O JOGO DUROU 24 HORA(S)\n";
    else if(start<endtime)
        cout<<"O JOGO DUROU "<<(endtime-start)<<" HORA(S)\n";
    else if(start>endtime)
        cout<<"O JOGO DUROU "<<(endtime+24)-start<<" HORA(S)\n";


    return 0;
}
