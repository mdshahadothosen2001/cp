#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int X,Y;
     double total;
     cin>>X>>Y;
     if(X==1)
     {
      total=Y*4.00;

     }
     else if(X==2)
     {
      total=Y*4.50;
     }
     else if(X==3)
     {
         total=Y*5.00;
     }
     else if(X==4)
     {
         total=Y*2.00;
     }
     else if(X==5)
     {
         total=Y*1.50;
     }
     cout<<"Total: R$ ";
     cout<<fixed<<setprecision(2)<<total<<"\n";
    return 0;
}
