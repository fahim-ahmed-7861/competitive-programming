#include<stdio.h>
int main()
{
    int i,ara[5],esum=0,osum=0;

    for(i=0; i<5; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<5;i++)
    {
        if(ara[i]%2==0) esum+=ara[i];

        else osum+=ara[i];
    }

    printf("esum = %d\nosum = %d",esum,osum);
}
