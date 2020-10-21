#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))

ll lcm(ll a, ll b) {

    return (a*b)/__gcd(a, b);
}
int main()
{
      ll n;


     while(scanf("%d",&n) && n)
     {
         ll m=n/2,k=0;

         map<ll,ll>ara;

         for(ll i=1; i<=m; i++)
         {
             if(n%i==0)
              ara[k++]=i;
         }
          ll ans=k;
         for(ll i=1; i<k;  i++)
         {
             for(ll j=i; j<k; j++)
             {
                 if(lcm(ara[i],ara[j])==n)
                    ans++;
             }
         }

       printf("%lld %lld\n",n,ans+1);

     }
     return 0;
}
