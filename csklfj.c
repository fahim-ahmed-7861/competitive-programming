#include<stdio.h>
int main()
{
    int n,i,T,p;
    char str[100];
    scanf("%d",&T);
    while(T--)
    {

    scanf(" %[^\n]",str);
    p=strlen(str);

    for(i=p-1; i>=0; i--)
    {

    printf("%s",str[i]);
    }

    }
}
