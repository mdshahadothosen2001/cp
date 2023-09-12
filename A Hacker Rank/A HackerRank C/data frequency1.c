/*
Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

Sample Input:
a11472o5t6
Sample Output:
0 2 1 0 1 1 1 1 0 0
Explain:
when we don't found digit display is 0;

0=>    no  time=0
1=>    two time=2
2=>    one time=1
3=>    no  time=0
4=>    one time=1
5=>    one time=1
6=>    one time=1
7=>    one time=1
8=>    no  time=0
9=>    no  time=0
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];
    int i,co[10];
    scanf("%[^\n]",s);
    for(i=0; i<10; i++)
    {
        co[i]=0;
    }
    for(i=0; i<strlen(s); i++)
    {

        if(s[i]=='0' )
        {
           co[0]=co[0]+1;
        }
        else if(s[i]=='1')
        {
            co[1]=co[1]+1;
        }
        else if(s[i]=='2')
        {
            co[2]=co[2]+1;
        }
        else if(s[i]=='3')
        {
            co[3]=co[3]+1;
        }
        else if(s[i]=='4')
        {
            co[4]=co[4]+1;
        }
        else if(s[i]=='5')
        {
            co[5]=co[5]+1;
        }
        else if(s[i]=='6')
        {
            co[6]=co[6]+1;
        }
        else if(s[i]=='7')
        {
            co[7]=co[7]+1;
        }
        else if(s[i]=='8')
        {
            co[8]=co[8]+1;
        }
        else if(s[i]=='9')
        {
            co[9]=co[9]+1;
        }
    }

    for(i=0; i<10; i++)
    {
        printf("%d ",co[i]);
    }
    return 0;
}
