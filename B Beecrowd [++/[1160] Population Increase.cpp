//Push

#include<iostream>

using namespace std;

void popu(int T);

int main()
{
    int T;
    cin>>T;
    popu(T);


    return 0;
}

void popu(int T)
{
    int PA,PB,i,j;
    double G1,G2,node=0,node1=0,time=0;
    double per=0,per1=0;

    for(i=0; i<T; i++)
    {
        cin>>PA>>PB>>G1>>G2;
        node=PA;
        node1=PB;
        per=(G1/100);
        per1=(G2/100);
        for(j=0; ;j++)
        {
            time++;
            node+=(node*per);
            node1+=(node1*per1);
            if(node>node1)
                break;

            if(time>100)
                break;
        }
        cout<<time<<"\n";
    }


}
