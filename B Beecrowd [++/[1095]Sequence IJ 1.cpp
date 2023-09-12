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
    int i,I,J;
    I=1;
    J=60;
    for(i=0; ; i++)
    {
        cout<<"I="<<I<<" "<<"J="<<J<<"\n";
        if(J==0)
            break;
        I+=3;
        J-=5;

    }
}
