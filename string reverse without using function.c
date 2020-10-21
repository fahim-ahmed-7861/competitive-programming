#include<stdio.h>
int main()
{
    int i,n;
    char str[500];
    scanf(" %[^\n]",str);
    n=strlen(str);

    for(i=n-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}

