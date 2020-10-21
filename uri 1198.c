#include<stdio.h>
int main()
{
    long long a,b;

    while(scanf("%lld %lld",&a,&b)==2)
    {
    //a=abs(a-b);
     if(a>b)printf("%lld\n",a-b);

     else printf("%lld\n",b-a);
    }

    return 0;
}
