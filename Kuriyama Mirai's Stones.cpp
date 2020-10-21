#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,t,x,i,s,y,k;


    scanf("%lld",&n);

    long long ara[n+5],cra[n+5],sums[n+5],sum[n+5];


    for(i=0; i<n; i++)
    {
        scanf("%lld",&ara[i]);
        cra[i]=ara[i];

    }

    sort(cra,cra+n);

    sum[0]=ara[0];
    sums[0]=cra[0];

    for(i=1; i<n; i++)
    {
        sum[i]=ara[i]+sum[i-1];
        sums[i]=cra[i]+sums[i-1];
    }

    scanf("%lld",&t);

    while(t--)
    {
       k=0;
        scanf("%lld %lld %lld",&s,&x,&y);

        if(s==1)
        {
           k=sum[y-1];

           if(x>1)k=k-sum[x-2];
        }
        else
        {
           k=sums[y-1];

           if(x>1)k=k-sums[x-2];

        }

        printf("%lld\n",k);
    }
    return 0;


}
