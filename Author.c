#include<stdio.h>
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output01.txt", "w", stdout)

int main()
{
    in;
    out;
    int n;

    scanf("%d",&n);

    int ara[n+1],cnt=0,i;

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0; i<n; i++)
    {
        if(ara[i]>=80)cnt++;
    }

    printf("%d\n",n);
}
