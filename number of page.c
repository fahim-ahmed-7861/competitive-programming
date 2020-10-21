#include<stdio.h>
int main()
{
    long long t,p=1;
    scanf("%lld",&t);
xx:
    while(t--)
    {
        long long n,k,count=0,sum=0;

        scanf("%lld %lld",&n,&k);
        if(n>k)
        {
            count++;
            printf("Case %lld: %lld\n",p,count);
            p++;
            goto xx;
        }
        //count++;
        while(k>sum)
        {
            count++;
             sum+=n;
            n=n*2;

        }
       // if(k==n)count++;
        printf("Case %lld: %lld\n",p,count);
        p++;
    }
    return 0;
}
