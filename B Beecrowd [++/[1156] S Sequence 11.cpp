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
    float i,j;
    float s=0;

    j=1;
    for(i=1; i<=39; i++)
    {


        s+=(i/j);

        i++;
        j*=2;
    }

    cout<<fixed<<setprecision(2);
    cout<<s<<"\n";
}



