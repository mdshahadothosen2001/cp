//Pushed=>Accepted

#include<iostream>

using namespace std;

void rest(int X,int Y);

int main()
{
    int X,Y;
    cin>>X>>Y;
    rest(X,Y);

    return 0;
}

void rest(int X,int Y)
{
    int i,node=0;
  if(X<=Y)
  {

      for(i=X+1; i<Y; i++)
    {
        if(i%5==2 || i%5==3)
        {
          cout<<i<<"\n";
        }

    }

  }
  else
  {

      for(i=Y+1; i<X; i++)
    {
        if(i%5==2 || i%5==3)
        {
          cout<<i<<"\n";
        }

    }
  }




}



