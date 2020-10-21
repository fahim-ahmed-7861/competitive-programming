#include<stdio.h>
#include<string.h>
int main()
{
    long long n,m;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        if(n==0 && m==0)return 0;

        printf("%lld\n",n*m);
    }

}

