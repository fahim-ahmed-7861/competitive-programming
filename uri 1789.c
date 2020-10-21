#include<stdio.h>
int main()
{
    int n,i,max;

    while(scanf("%d",&n)==1)
    {
        int ara[n+1];
        for(i=0; i<n; i++)scanf("%d",&ara[i]);
        max=ara[0];
        for(i=1; i<n; i++)  if(ara[i]>max)max=ara[i];

        if(max<10)printf("1\n");

        else if(max>=10 && max<20)printf("2\n");

        else printf("3\n");
    }
    return 0;
}
