/*

Take an array of integer data type of size 5.
Scan the values from the user.
Now print the output like the following one-

Values in array: 10 25 20 15 30
Sum of odd values: 40
Sum of even values: 60
*/

#include<stdio.h>
int main()
{
    int i,num[5];
    int odd, even;
    odd=0;
    even=0;

    for(i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<5; i++)
    {
        if(num[i]%2!=0)
        {
            odd+=num[i];
        }
        else if(num[i]%2==0)
        {
            even+=num[i];
        }
    }

    printf("\n%d",odd);
    printf("\n%d",even);

    return 0;
}
