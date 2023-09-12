//Pushed
#include<iostream>

using namespace std;

void password();

int main()
{
    password();

    return 0;
}

void password()
{
    int i,pass=2002;

    for(i=0; ; i++)
    {
        int data;
        cin>>data;
        if(data!=pass)
        {
            cout<<"Senha Invalida\n";
        }
        else if(data==pass)
        {
            cout<<"Acesso Permitido\n";
            break;
        }
    }

}

