#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 map<int ,int>mp;
int main()
{
    ll t,n,s,i,j,d,sum,c,Max,k=0;

    cin>>t;

    while(t--)
    {
        cin>>n>>s;

        ll a[n+1];

        for( i=0; i<n; i++)
        {
            cin>>a[i]>>d;
            mp[i]=d;
        }

        for(i=0; i<n; i++)
        {
            c=0;
            for(j=0; j<n; j++)
            {
                if(a[i]+a[j]<=s)
                {
                    c++;
                    Max=max(mp[i],mp[j]);
                }
            }
        }

       if(c)printf("Case %lld: %lld %lld\n",k++,c,Max);

       else printf("Case %lld: RIP LUIUPC\n",k++);
    }


}
