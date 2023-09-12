#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int code1,code2,quantity1,quantity2;
    double price1,price2,payment;
    cin>>code1>>quantity1>>price1;
    cin>>code2>>quantity2>>price2;
    payment=(quantity1*price1)+(quantity2*price2);
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<payment<<endl;
    return 0;
}
