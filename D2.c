#include<stdio.h>

int main()
{

    int n;

    scanf("%d",&n);

    int ara[n+1],i;

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    int num,cnt=0;

    scanf("%d",&num);

    for(i=0; i<n; i++)
    {
        if(ara[i]==num)cnt++;
    }

    printf("%d times\n",cnt);



}
