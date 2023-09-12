/*
Is there any error in the following program?
if not what will be the output-

#include<stdio.h>
int main()
{

int i;
double* pA;
double a[]={5,10,15,20,25};
pA=a;

for(i=0; i<5; i++)
{
printf("%.2lf",*(pA+i));
}
return 0;
}

*/

#include<stdio.h>
int main()
{

int i;
double *pA;
double a[]={5,10,15,20,25};
// pA=a; is also worked
pA=&a;

for(i=0; i<5; i++)
{
printf("%.2lf  ",*(pA+i));
}
return 0;
}
