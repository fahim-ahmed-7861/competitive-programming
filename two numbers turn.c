#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        long long a,b,c;

        scanf("%lld %lld %lld",&a,&b,&c);

        if(c%2==1) a*=2;

        if(a>b)  printf("%lld\n",a/b);

        else printf("%lld\n",b/a);
    }
    return 0;
}
