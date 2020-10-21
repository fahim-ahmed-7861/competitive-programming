#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long i,n,m,b,sum=0;

        scanf("%lld %lld %lld",&n,&b,&m);

        while(n>0)
        {

            if(n%2==0)
            {
                n/=2;
                sum+=(n*m)+b;
                m*=2;
            }
            else
            {
                n=(n+1)/2;
                sum+=(n*m)+b;
                m*=2;
                n--;
            }

        }
        sum=sum-b;
        printf("%lld\n",sum);
    }
    return 0;
}
