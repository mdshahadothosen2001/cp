#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double X1,Y1,X2,Y2,distance;
    cin>>X1>>Y1;
    cin>>X2>>Y2;
    distance=(X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1);
    distance=sqrt(distance);
    cout<<fixed<<setprecision(4)<<distance<<endl;
    return 0;
}
