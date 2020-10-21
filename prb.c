#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    int ara[n+1];

    for(i=0; i<n; i++)scanf("%d",&ara[i]);

    for(i=0; i<=n; i++)printf("%d\n",ara[i]);

}
