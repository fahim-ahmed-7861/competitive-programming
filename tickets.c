#include<stdio.h>
int main()
{
    int t,n,i,count;
    char str[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",str);

        n=strlen(str);

        char c=str[0],d=str[1];

        for(i=1; i<n ; i++)
        {
            if(str[i]==str[i-1] || c!=str[i]
                && d!=str[i])
                break;

        }
        if(i==n)printf("YES\n");

        else printf("NO\n");
    }
    return 0;
}
