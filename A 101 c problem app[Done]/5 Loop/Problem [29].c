#include<stdio.h>
/* take an integer as input and print it's mutlipication table up to 10. if user gives5, your output should look like the following example- */

int main()
{
    int i,mult, num;
    printf("Enter integer : ");
    scanf("%d",&num);
    for(i=1; i<=10; i++)
    {

        mult=num*i;
        printf("\n%d",mult);

    }



    return 0;
}
