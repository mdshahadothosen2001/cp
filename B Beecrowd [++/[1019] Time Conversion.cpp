#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N,hours,minutes,seconds;
    cin>>N;
    hours=N/3600;
    N=N%3600;
    minutes=N/60;
    N=N%60;
    seconds=N;
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    return 0;
}
