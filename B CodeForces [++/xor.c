//Try++


#include<stdio.h>
int main()
{
    int t,n,i,j,k;
    scanf("%d",&t);
    int a[1001][101];
    int b[100];
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        b[i]=n;
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


   /*for(i=0; i<t; i++)
    {
        for(j=0; j<b[i]; j++)
        {
        printf("%d ",a[i][j]);

        }
        printf("\n");
    }
*/
for(i=0; i<t; i++)
    {
        for(j=0; j<b[i]; j++)
        {
        printf("%d ",a[i][j]);

        }
        printf("\n");
    }

    return 0;
}
