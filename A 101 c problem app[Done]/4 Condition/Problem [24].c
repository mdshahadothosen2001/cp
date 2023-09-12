#include<stdio.h>

// input as a integer number of rank[1,2,3,....]

int main()
{
    int rank;

    printf("Enput The salary Rank Number: ");

    scanf("%d",&rank);

    if(rank==1)
    {
        printf("Your Salary is : 2,50,000 DBT");
    }
    else if(rank==2)
    {
        printf("Your Salary is : 2,10,000 BDT");
    }
    else if(rank==3)
    {
        printf("Your Salary is : 1,50,000 BDT");
    }
    else if(rank==4)
    {
        printf("Your Salary is : 80,000 BDT");
    }
    else if(rank>=5)
    {
        printf("Your Salary is : 50,000 BDT");
    }

    return 0;
}
