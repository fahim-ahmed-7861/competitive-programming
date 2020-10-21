#include<stdio.h>
int main()
{
    int n,count=0,i,min;

    scanf("%d",&n);

    int ara[n+1];

    for(i=0; i<n; i++)scanf("%d",&ara[i]);

    min=ara[0];
    for(i=1; i<n; i++)
    if(ara[i]<min)
    {
        min=ara[i];
        count=i;
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,count);
    return 0;

}
