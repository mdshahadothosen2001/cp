
#include<iostream>

using namespace std;
void triangles(double A,double B,double C);

int main()
{
    double A,B,C,x,y,z;
    cin>>A>>B>>C;

    y=A+B+C;
    if(A>=B &&A>=C )
        x=A;
    else if(B>=C && B>=A)
        x=B;
    else if(C>=B && C>=A)
        x=C;





    if(A<=B &&A<=C )
        z=A;
    else if(B<=C && B<=A)
        z=B;
    else if(C<=B && C<=A)
        z=C;


   y=(y-(x+z));


    triangles(x,y,z);



    return 0;
}

void triangles(double A,double B,double C)
{


 if(A>=B+C)
    cout<<"NAO FORMA TRIANGULO\n";
 else
 {
     if(A*A==B*B+C*C)
    cout<<"TRIANGULO RETANGULO\n";
 if(A*A>B*B+C*C)
    cout<<"TRIANGULO OBTUSANGULO\n";
 if(A*A<B*B+C*C)
    cout<<"TRIANGULO ACUTANGULO\n";
 if(A==B && B==C)
    cout<<"TRIANGULO EQUILATERO\n";
 if((A==B && B!=C)||(B==C && C!=A) || (A==C && C!=B) )
    cout<<"TRIANGULO ISOSCELES\n";
 }
}
