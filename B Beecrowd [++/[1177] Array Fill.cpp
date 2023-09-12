//Pushed=>Accepted

#include<iostream>

using namespace std;

void ArrFill(int T);

int main()
{
    int T;
    cin>>T;
    ArrFill(T);


    return 0;
}


void ArrFill(int T)
{

    int x,N[1000],i;
    x=0;
    for(i=0; i<1000; i++)
    {
        N[i]=x;
        x++;
        if(x==T)
            x=0;
    }
    for(i=0; i<1000; i++)
        cout<<"N["<<i<<"] = "<<N[i]<<"\n";
}
