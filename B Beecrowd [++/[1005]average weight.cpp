#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
    double A,B,average;
    cin>>A>>B;
    average=(A*3.5+B*7.5)/(3.5+7.5);
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<average<<endl;
    return 0;
}
