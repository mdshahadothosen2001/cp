//Pushed->Accepted
#include<iostream>

using namespace std;

void IJ();

int main()
{
    IJ();

    return 0;
}

void IJ()
{
    int i,j,I,J;
    for(i=1; i<=9;i++)
    {
        I=i;
        for(j=7; j>=5; j--)
        {

         cout<<"I="<<I<<" J="<<j<<"\n";

        }

        i++;
    }


}
