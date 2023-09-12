/*
Write a program which takes an integer as input
and print "YES, Prime" if the number is prime otherwise "NO".

*/

#include<stdio.h>
#include<math.h>

int main()
{

    int num,i,count=0;

    scanf("%d",&num);

    printf("\n%d\n",num);

    for(i=2; i<=num; i++)
    {

            if(num%i==0)
            {
                count++;
            printf("G\n");

            }

    }

    if(count>=2)
    {
        printf("NO");
    }
    else
    {
        printf("YES,Prime");
    }



    return 0;
}
