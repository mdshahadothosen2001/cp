//Pushed-> Accepted
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
    double i,j,I,J;
    J=1;
    for(i=0; i<=2.0; i++)
    {
        I=i;
        for(j=0; j<3; j++)
        {
            cout<<"I="<<I<<" J="<<J<<"\n";
            J++;
        }
        J=(J-3)+0.2;
        i=(i-1)+0.2;
    }
}
