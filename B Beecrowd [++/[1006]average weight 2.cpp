#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
    double A,B,C,average;
    cin>>A>>B>>C;
    average=(A*2+B*3+C*5)/(2+3+5);
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<average<<endl;
    return 0;
}
