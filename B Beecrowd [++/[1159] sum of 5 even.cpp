//Pushed=>Accepted
#include<iostream>

using namespace std;

void sumEven(int X);

int main()
{
    int i,X;

    run:
        cin>>X;

    if(X!=0)
    {
        sumEven(X);
      goto run;
    }






    return 0;
}

void sumEven(int X)
{
    int i,time=0,sum=0;

    for(i=X; ;i++)
    {
        if(i%2==0)
        {

            sum+=i;
            time++;

            if(time==5)
                break;
        }
    }

    cout<<sum<<"\n";


}
