#include<stdio.h>
int main()
{
    char ch;

    ch=getchar();

    if('a'<=ch && 'z'>=ch)
    {
        printf("Yes\n");
    }
    else printf("No\n");
}
