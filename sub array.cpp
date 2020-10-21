#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,p,c,k,m,j,sum=0,i,s;

    scanf("%lld %lld %lld",&n,&k,&m);

    long long ara[n+2];

    for(i=1; i<=n; i++)ara[i]=i;
    sum=(n*(n+1))/2;
    for(i=2; i<=k; i++)
    {
        p=1;
        s=1;
        for(j=1,c=0; j<=n; )
        {
            p=p*ara[j];
            c++;
            if(i==c)
            {
                sum+=p;
                p=1;
               j=++s;

                c=0;
            }
            else j++;

        }
    }
    printf("%lld\n",sum%m);

    return 0;
}
