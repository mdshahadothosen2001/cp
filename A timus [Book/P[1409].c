/*
Taken two integer variable harry, larry
sum (harry+larry)-1
a=sum-harry
b=sum-larry
write a,b
like 4 7
output 6 3
explain sum=11 then sum-1=10, a=10-4(harry)=6,
b=10-7(larry)=3
*/
#include<stdio.h>
int main()
{
    int harry,larry,sum, a,b;
    scanf("%d%d",&harry,&larry);
    sum=harry+larry;
    sum=sum-1;
    a=sum-harry;
    b=sum-larry;

    printf("%d %d",a,b);

    return 0;
}
