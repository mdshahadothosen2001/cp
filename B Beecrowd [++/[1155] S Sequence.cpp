//Pushed=>Accepted

#include<iostream>
#include<iomanip>


using namespace std;

void ss();

int main()
{
    ss();


    return 0;

}

void ss()
{
    float i;
    float s=0;

    for(i=1; i<=100; i++)
    {

        s+=(1/i);
    }

    cout<<fixed<<setprecision(2);
    cout<<s<<"\n";
}


