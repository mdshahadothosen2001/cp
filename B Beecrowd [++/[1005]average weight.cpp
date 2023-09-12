#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A,B,average;
    cin>>A>>B;
    average=(A*3.5+B*7.5)/(3.5+7.5);
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<average<<endl;
    return 0;
}
