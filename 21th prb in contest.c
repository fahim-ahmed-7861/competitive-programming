#include<stdio.h>
int main()
{
    int i,T,len;

    char str[1000];
    scanf("%d",&T);
    while(T--)
    {
    scanf(" %[^\n]",str);
    len=strlen(str);

    for(i=len-1;i>=0;i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
