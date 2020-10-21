#include<stdio.h>
int main()
{
    int i,j,ara[22];

    for(i=19; i>=0; i--)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0; i<20; i++)printf("N[%d] = %d\n",i,ara[i]);

    return 0;
}
