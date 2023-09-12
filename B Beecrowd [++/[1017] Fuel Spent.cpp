#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int time,speed;
     double liter;
     cin>>time>>speed;
     liter=(time*speed)*(1.0/12);
     cout<<fixed<<setprecision(3)<<liter<<endl;

    return 0;
}
