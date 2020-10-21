#include<stdio.h>
int main()
{
    long long int n,sum,i;
    int T;
    scanf("%d",&T);
    while(T--)
    {   sum=1;
        scanf("%lld",&n);

        for(i=1;i<=n;i++)
        {
            sum*=i;
        }

        printf("%lld\n",sum);
    }
}
