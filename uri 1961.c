#include<stdio.h>
int main()
{
    int h,n,i;

    scanf("%d %d",&h,&n);

    int ara[n+1];

    for(i=0; i<n; i++)scanf("%d",&ara[i]);

    for(i=0; i<n-1; i++)
    {
        if(ara[i]+h<ara[i+1] && ara[i]>ara[i+1])break;
    }
    if(i==n-1)printf("YOU WIN\n");

    else printf("GAME OVER\n");

    return 0;
}
