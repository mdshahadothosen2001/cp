/*
Task:
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.


Input Format

Input will contain four integers -  , one on each line.

Output Format

Print the greatest of the four integers.
Note: I/O will be automatically handled.

*/
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int greater;
    if(a>b && a>c && a>d)
    {
        greater=a;
    }
    else if(b>c && b>d)
    {
        greater=b;
    }
    else if(c>d)
    {
        greater=c;
    }
    else
    {
        greater=d;
    }


    return greater;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
