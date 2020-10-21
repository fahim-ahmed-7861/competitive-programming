#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t;

    scanf("%lld %lld",&a,&b);

step1:
    if(a==0 || b==0)
        goto print;


    if(a>=(2*b))
    {
        a=a%(2*b);

        goto step1;
    }

    else if(b>=(2*a))
    {
        b=b%(2*a);

        goto step1;
    }

print:
    printf("%lld %lld\n",a,b);


    return 0;
}
