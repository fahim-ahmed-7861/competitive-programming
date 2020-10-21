#include<stdio.h>
int main()
{
    int i,n,ara[500],max,min;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    max=ara[0];
    min=ara[0];
    for(i=1; i<n; i++)
    {
        if(ara[i]>max)max=ara[i];
        if(ara[i]<min)min=ara[i];
    }
    printf("MAX : %d\nMIN : %d\n",max,min);

    return 0;

}

