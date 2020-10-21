#include<stdio.h>

int main()
{

    int n,i;

    scanf("%d",&n);

    int ara[n+1],cra[n+1],ans[n+1];

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0; i<n; i++)
    {
        scanf("%d",&cra[i]);
    }

    for(i=0; i<n; i++)
    {
        ans[i]=ara[i]-cra[i];
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",ans[i]);
    }





}
