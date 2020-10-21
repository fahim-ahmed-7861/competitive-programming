#include<stdio.h>
long long int fact(long long int i)
{
    long long int sum=1,j;
    for(j=1; j<=i; j++)
    {
        sum*=j;
    }

    return sum;
}
int main()
{
    int T;

    long long int n,i;

    scanf("%d",&T);
    while(T--)
    {
        double sum=0;
        scanf("%lld",&n);
        for(i=1; i<=n; i++)
        {
            sum+=((double)i/fact(i));
        }
        printf("%0.4lf\n",sum);
    }
}
