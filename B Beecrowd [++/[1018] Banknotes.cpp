#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int N,div;
     cin>>N;
     cout<<N<<endl;
     div=N/100;
     N=N%100;
     cout<<div<<" nota(s) de R$ 100,00"<<endl;
     div=N/50;
     N=N%50;
     cout<<div<<" nota(s) de R$ 50,00"<<endl;
     div=N/20;
     N=N%20;
     cout<<div<<" nota(s) de R$ 20,00"<<endl;
     div=N/10;
     N=N%10;
     cout<<div<<" nota(s) de R$ 10,00"<<endl;
     div=N/5;
     N=N%5;
     cout<<div<<" nota(s) de R$ 5,00"<<endl;
     div=N/2;
     N=N%2;
     cout<<div<<" nota(s) de R$ 2,00"<<endl;
     div=N/1;
     N=N%1;
     cout<<div<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}
