#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int number,hours;
    double per_hour,salary;
    cin>>number>>hours>>per_hour;
    salary=hours*per_hour;
    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<salary<<endl;
    return 0;
}
