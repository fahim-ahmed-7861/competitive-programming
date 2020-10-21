#include<stdio.h>
int main()
{
    int i,n,ara[500],min;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    min=ara[0];

    for(i=1; i<n; i++)
    {
        if(ara[i]<min) min=ara[i];
    }

    printf("MIN : %d",min);

}

