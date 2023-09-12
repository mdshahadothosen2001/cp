//Accepted
#include<iostream>
#include<iomanip>

using namespace std;

void taxes(double salary);

int main()
{
    double salary;
    cin>>salary;
    taxes(salary);

    return 0;
}

void taxes(double salary)
{
    double tax=0.00;
//Check salary range [0 to 2k] for tax free
 if(00.00<=salary && salary<=2000.00)
        cout<<"Isento\n";
 else if(2000.00<salary)
 {
//work [salary more than 2k]
     if(0.00<salary)
    {

        salary-=2000.00;
        if(salary<=1000.00)
        {
            tax+=salary*0.08;
        }
        else
        {
            tax+=(1000.00*0.08);
        }
        salary-=1000;
    }


     if(0.00<salary)
    {
        if(salary<=1500.00)
        {
            tax+=salary*0.18;
        }
        else
        {
            tax+=1500.00*0.18;
        }
        salary-=1500.00;
    }


    if(salary>0.00)
    {
        tax+=(salary*0.28);
    }
 }

 if(tax>0.00)
    cout<<fixed<<setprecision(2)<<"R$ "<<tax<<"\n";

}


