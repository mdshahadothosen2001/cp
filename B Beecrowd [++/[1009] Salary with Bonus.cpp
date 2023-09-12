#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    char name[100];
    double salary,sold,total;
    cin>>name>>salary>>sold;
    total=salary+((15.0/100.0)*sold);
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<total<<endl;
    return 0;
}
