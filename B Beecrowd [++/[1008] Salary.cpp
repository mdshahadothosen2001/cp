#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
    int number,hours;
    double per_hour,salary;
    cin>>number>>hours>>per_hour;
    salary=hours*per_hour;
    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<salary<<endl;
    return 0;
}
