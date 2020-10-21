#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll t,n,i,k;
    scanf("%lld",&t);

    while(t--)
    {
        ll sum=0;

        scanf("%lld",&n);

        int ara[n+3];

        for(i=0; i<n; i++)scanf("%lld",&ara[i]);

        sort(ara,ara+n);

        for(i=1; i<n; i++)
        {
            if(ara[i]>ara[i-1])
            {
                sum+=ara[i]-ara[i-1];

                ara[i]=ara[i-1];
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
