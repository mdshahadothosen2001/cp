#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double Pi,R,volume;
    Pi=3.14159;
    cin>>R;
    volume=((4.0/3)*Pi*(R*R*R));
    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<volume<<endl;
    return 0;
}
