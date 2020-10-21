#include<stdio.h>
int main()
{
    int i,j,n,ara[500],ara1[500];

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    j=n-1;
    for(i=0; i<n; i++,j--)
    {
        ara1[i]=ara[j];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",ara1[i]);
    }
}
