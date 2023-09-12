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
    J=7;
    for(i=1; i<=9; i++)
    {
        I=i;
        for(j=0; j<3; j++)
        {
            cout<<"I="<<I<<" J="<<J<<"\n";
            J--;
        }
        J+=5;
        i++;
    }
}
