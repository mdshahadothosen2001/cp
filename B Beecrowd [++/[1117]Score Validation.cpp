//Pushed=>Accepted

#include<iostream>
#include<iomanip>

using namespace std;

void check();

int main()
{
    check();


    return 0;
}


void check()
{
    double x,y,media=0.0;
        xy:
        cin>>x;
        if(x<0 || 10<x)
        {
            cout<<"nota invalida\n";
          goto xy;
        }
        yx:
            cin>>y;
            if(y<0 || 10<y)
            {
                cout<<"nota invalida\n";
                goto yx;
            }


         media=(x+y)/2;
         cout<<fixed<<setprecision(2);
         cout<<"media = "<<media<<"\n";

}
