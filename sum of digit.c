#include<stdio.h>
int main()
{
    long long sum,n;

    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;

        sum=0;


    xx:while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        if(sum>=10)
        {
            n=sum;
            sum=0;
            goto xx;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
