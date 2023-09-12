#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
      double N1,N2,N3,N4,N5;
    cin>>N1>>N2>>N3>>N4;
    double s1,s2,average;
    s1=(N1*2+N2*3)/5;
    s2=(N3*4+N4*1)/5;
    average=(s1+s2)/2;

    cout<<"Media: ";
    cout<<fixed<<setprecision(1)<<average<<"\n";
    if(average<5.0)
    {
        cout<<"Aluno reprovado.\n";
    }
    else if(average>7.0)
    {
        cout<<"Aluno aprovado.\n";
    }
    else
    {
       cout<<"Aluno em exame.\n";
       cin>>N5;
       cout<<"Nota do exame: "<<N5<<"\n";
       s1=(average+N5)/2;
       cout<<"Aluno aprovado.\n";
       cout<<fixed<<setprecision(1)<<"Media final: "<<s1<<"\n";

    }

    return 0;
}
