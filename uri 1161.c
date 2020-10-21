#include<stdio.h>
int main()
{
    long long  n,sume,m,i,sum=1;


    while( scanf("%lld %lld",&n,&m)==2)
    {
     sum=sume=1;
    for(i=1; i<=n; i++)sum*=i;

     for(i=1; i<=m; i++)sume*=i;

    printf("%lld\n",sum+sume);
    }
    return 0;
}
