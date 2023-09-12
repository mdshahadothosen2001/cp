#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double number;
    cin>>number;
    if(number<0 || 100<number)
    {
        cout<<"Fora de intervalo\n";
    }
    else if(0<=number && number<=25.0 )
    {
        cout<<"Intervalo [0,25]\n";
    }
    else if(25.0<number && number<=50.0)
    {
        cout<<"Intervalo (25,50]\n";
    }
    else if(50.0<number && number<=75)
    {
        cout<<"Intervalo (50,75]\n";
    }
    else if(75.0<number && number<=100.0)
    {
        cout<<"Intervalo (75,100]\n";
    }


    return 0;
}
