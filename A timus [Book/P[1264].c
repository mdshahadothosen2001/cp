/*Input n,m;(int)
like 3 1
Output 6
use  ++m;
then n*m
*/
#include<stdio.h>
int main()
{
    int n,m,mul=0;
    scanf("%d%d",&n,&m);
    ++m;
    mul=n*m;
    printf("%d",mul);

    return 0;
}
