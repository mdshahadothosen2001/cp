#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     int age,years,months;
     cin>>age;
     years=age/365;
     age=age%365;
     months=age/30;
     age=age%30;
     cout<<years<<" ano(s)"<<endl;
     cout<<months<<" mes(es)"<<endl;
     cout<<age<<" dia(s)"<<endl;
    return 0;
}
