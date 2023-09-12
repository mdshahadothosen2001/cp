/*
if user given 4 then printing pattern:

                            4 4 4 4 4 4 4
                            4 3 3 3 3 3 4
                            4 3 2 2 2 3 4
                            4 3 2 1 2 3 4
                            4 3 2 2 2 3 4
                            4 3 3 3 3 3 4
                            4 4 4 4 4 4 4
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
  	int i,j,k,min;
    k=n*2-1;
    for(i=0; i<k; i++)
    {
        min=0;
        for(j=0; j<k; j++)
        {
            min = i < j ? i : j;
            min = min < k-i ? min : k-i-1;
            min = min < k-j-1 ? min : k-j-1;
            printf("%d ", n-min);


        }

      printf("\n");
    }
    return 0;
}
