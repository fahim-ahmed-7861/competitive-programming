#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define pll          pair<ll,ll>
#define pb           push_back
#define eb           emplace_back
#define F            first
#define S            second
#define vll(v)       v.begin(),v.end()
#define bug(a)       cerr << #a << " : " << a << endl;
#define fastread()     ios_base::sync_with_stdio(false);cin.tie(NULL);

const int Max = 1e4+10;



bool check(ll x,ll i)
{
    return (x&(1<<i));
}
void Set(ll &x,ll i,ll z)
{
    if(z)
       x=(x | (1<<i));

    else
        x=(x & ~(1<<i));

}
void suffle(ll &x,ll i)
{
   x= x^(1<<i);
}

bool ispower2(ll x)
{
    return ((x& (x-1))==0);
}
int hamming(int a, int b) {
return __builtin_popcount(a^b);
}

ll ara[100010];
int main()
{
       fastread();

       ll a,n,i,mx,b,pos,ans=0;

       cin>>n;

       for(i=0; i<n; i++)
       {
           cin>>a;

            b=(a/32);

            pos=(a%32);

           mx=max(mx,b);

           Set(ara[b],pos,1);
       }


       for(i=0; i<=mx; i++)
       {
           ans+=__builtin_popcount(ara[i]);
       }

       cout<<ans<<endl;





}
