#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

     int A,B;
     cin>>A>>B;
     if((A%A==0 && B%A==0) || (A%B==0 && B%B==0) )
         cout<<"Sao Multiplos\n";
     else
            cout<<"Nao sao Multiplos\n";

    return 0;
}
