#include<stdio.h>
int main()
{
    int i,n,in=0,out=0;
    scanf("%d",&n);
    int ara[n+1];

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);

        if(ara[i]>=10 && ara[i]<=20)in++;

        else out++;
    }

    printf("%d in\n%d out\n",in,out);

    return 0;
}
