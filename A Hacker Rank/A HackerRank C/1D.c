/*
nput Format:
The first line contains an integer, .
The next line contains  space-separated integers.

Output Format:
Print the sum of the integers in the array.

Sample Input:
6
16 13 7 2 1 12
Sample Output:

51

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum+=arr[i];

    }
    printf("%d",sum);
    return 0;
}
