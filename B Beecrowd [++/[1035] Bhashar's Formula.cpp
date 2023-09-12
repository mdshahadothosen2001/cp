#include<iostream>
#include<iomanip>
#include<ctype.h>
#include<cmath>

using namespace std;

int main()
{
    double A,B,C,R,R1,R2;
    cin>>A>>B>>C;
    R=((B*B)-(4*A*C));
    R=sqrt(R);
    R1=(-B+R)/(2*A);
    R2=(-B-R)/(2*A);

    if(R1>=0 || 0>=R1)
    {
        cout<<"R1 = ";
        cout<<fixed<<setprecision(5)<<R1<<"\n";
        cout<<"R2 = ";
        cout<<fixed<<setprecision(5)<<R2<<"\n";
    }
    else
    {
        cout<<"Impossivel calcular\n";
    }

    return 0;
}
