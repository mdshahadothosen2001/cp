#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     int time,speed;
     double liter;
     cin>>time>>speed;
     liter=(time*speed)*(1.0/12);
     cout<<fixed<<setprecision(3)<<liter<<endl;

    return 0;
}
