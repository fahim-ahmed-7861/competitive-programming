#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,n;
    char str[1000];
    scanf("%d",&t);

    while(t--)
    {
        scanf(" %[^\n]",str);

        n=strlen(str);
        m=n/2;

        for(i=n-1;  i>-1 ; i--)
        {
            if(str[i]>='0' && str[i]<='9' || str[i]==' ')
            {
                printf("%c",str[i]);
            }

            else printf("%c",str[i]+3);
        }
        printf("\n");
    }
}
