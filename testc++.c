#include<stdio.h>
int main()
{
    long long n,m,t;

    scanf("%lld",&t);

    while(t--)
    {
    scanf("%lld %lld",&n,&m);

  if(m==0)goto xx;
    if(n%m==0)printf(":wink:\n");

    else xx:printf(":kick:\n");
    }
    return 0;
}
