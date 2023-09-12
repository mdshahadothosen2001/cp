/*

N(1<=N<=100)
A(1<=A<=100)
B(1<=B<=100)

result = 2*(N*A*B)

like input 5 2 3
 output 60
 explain (5*2*3)*2=60

*/

#include<stdio.h>
int main()
{
    int n,a,b,result;
    scanf("%d%d%d",&n,&a,&b);
    result=2*(n*a*b);
    printf("%d",result);

    return 0;
}
