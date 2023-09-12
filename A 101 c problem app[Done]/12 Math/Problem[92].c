/*
Write a program  which takes the coordinates of two
points(x1,y1) and (x2,y2) from the user and
print the distance of those two points.

*/

#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,sub1,sub2;
    double sum;
    float dis;

    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);

   sub1=x2-x1;
   sub2=y2-y1;
   sum=(sub1*sub1)+(sub2*sub2);
   dis=sqrt(sum);
   printf("%lf",dis);



    return 0;
}
