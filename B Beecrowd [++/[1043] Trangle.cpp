#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double A,B,C,Area;

    cin>>A>>B>>C;
    if(A<B+C && B<A+C && C<A+B )
        {
            Area=(A+B+C);
            cout<<fixed<<setprecision(1)<<"Perimetro = "<<Area<<"\n";
        }
    else
        {
            Area=0.5*(A+B)*C;
            cout<<fixed<<setprecision(1)<<"Area = "<<Area<<"\n";
        }


    return 0;
}
