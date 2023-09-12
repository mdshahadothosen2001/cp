//Accepted
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double salary,earned,percent;
    cin>>salary;
    if(salary<=400.00)
        {
                earned=salary*0.15;
                salary=salary+(salary*0.15);

                cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary<<"\n";
                cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earned<<"\n";
                cout<<"Em percentual: 15 %\n";
        }
    else if(salary>=400.01 && salary<=800.00)
        {

                earned=salary*0.12;
                salary=salary+(salary*0.12);

                cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary<<"\n";
                cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earned<<"\n";
                cout<<"Em percentual: 12 %\n";
        }
    else if(salary>=800.01 && salary<=1200.00)
        {

                earned=salary*0.10;
                salary=salary+(salary*0.10);

                cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary<<"\n";
                cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earned<<"\n";
                cout<<"Em percentual: 10 %\n";
        }
    else if(salary>=1200.01 && salary<=2000.00)
        {

                earned=salary*0.07;
                salary=salary+(salary*0.07);

                cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary<<"\n";
                cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earned<<"\n";
                cout<<"Em percentual: 7 %\n";
        }
    else if(salary>2000.00)
        {

                earned=salary*0.04;
                salary=salary+(salary*0.04);

                cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary<<"\n";
                cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earned<<"\n";
                cout<<"Em percentual: 4 %\n";
        }




    return 0;
}
