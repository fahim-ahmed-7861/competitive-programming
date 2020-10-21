#include<stdio.h>
int main()
{
    int t,k;

    long long int i,p,n,sum,a=-1;

    scanf("%d",&k);
    for(t=1; t<=k; t++)
    {
        sum=0;

    scanf("%lld %lld",&n,&p);

     for(i=1; i<=n; i++)
    {
        sum+=i*a;

        if(i%p==0) a=a*(-1);

    }

    printf("Case %d: %lld\n",t,sum);

    }
}
