#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char str[10000];
    scanf("%d",&t);
    while(t--)
    {
        int i,n,count,g;
        scanf("%s",&str);

        n=strlen(str);

        count=0;
        g=0;

        for(i=0; i<n; i++)
        {
            if(str[i]=='1')count++;

            else g++;
        }
        if(count==1 || g==1)printf("Yes\n");

        else printf("No\n");

    }
    return 0;
}
