#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
   double A,B,C,PI;
   PI=3.14159;
   double triangulo,circulo,trapezio,quadrado,retangulo;
   cin>>A>>B>>C;
   triangulo=0.5*(A*C);
   circulo=PI*(C*C);
   trapezio=0.5*(A+B)*C;
   quadrado=B*B;
   retangulo=A*B;


   cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<triangulo<<endl;
   cout<<fixed<<setprecision(3)<<"CIRCULO: "<<circulo<<endl;
   cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<trapezio<<endl;
   cout<<fixed<<setprecision(3)<<"QUADRADO: "<<quadrado<<endl;
   cout<<fixed<<setprecision(3)<<"RETANGULO: "<<retangulo<<endl;
    return 0;
}
