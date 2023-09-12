#include<stdio.h>
// quadrant of graph,x,y where x,y are + or -
// input as a integer number + or -
int main()
{
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0)
    {
        printf("First quadrant");
    }
    else if(x<0 && y>0)
    {
        printf("Second quadrant");
    }
    else if(x<0 && y<0)
    {
        printf("Third quadrant");
    }
    else if(x>0 && y<0)
    {
        printf("Four quadrant");
    }


    return 0;
}
