/* Get your name from keyboard and print it with greeting
like
Hello Mr. "Your name".

print without quote and get your name in one word...
*/
#include<stdio.h>
int main()
{
    char greeting[]="Hello ";
    char name[20];

    scanf("%[^\n]",&name);

    printf("\n%s",greeting);
    printf("%s",name);



    return 0;
}
