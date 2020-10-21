#include<stdio.h>
int main()
{
    long long int i,j,n,a=0,b=1,c;
    scanf("%lld",&n);
     printf("%lld ",b);

    for(i=2; i<=n; i++)
    {

        c=a+b;

        a=b;

        b=c;

         printf("%lld ",b);

    }
}
