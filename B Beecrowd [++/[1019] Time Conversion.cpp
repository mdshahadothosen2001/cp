#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
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
