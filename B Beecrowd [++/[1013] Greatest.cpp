#include <iostream>
#include<cmath>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int A,B,C,MaiorAB;
    cin>>A>>B>>C;
        MaiorAB=(A+B+abs(A-B))/2;
        MaiorAB=(MaiorAB+C+abs(MaiorAB-C))/2;
    cout<<MaiorAB<<" eh o maior"<<endl;
    return 0;
}
