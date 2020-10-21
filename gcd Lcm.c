#include<stdio.h>
long long gcd(long long a,long long b)
{
    int t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;

       // printf("%d ",b);


    }
    return a;

}
int main()
{
    int T;
    long long a,b;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld %lld",&a,&b);

        printf("%lld %lld\n",gcd(a,b),(a*b)/gcd(a,b));
    }
    return 0;
}
