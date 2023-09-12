//Pushed=Accepted

#include<iostream>
#include<iomanip>

using namespace std;

void age();

int main()
{
    age();


    return 0;
}

void age()
{
    int i,N;
    float avg=0;
    i=0;

    while(i>=0)
    {
        cin>>N;
        if(N>=0)
        {
            avg+=N;
            i++;
        }
        else
            break;

    }
    avg=avg/i;
    cout<<fixed<<setprecision(2);
    cout<<avg<<"\n";
}
