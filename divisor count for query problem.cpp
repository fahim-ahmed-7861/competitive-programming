#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
const int Max = 1e6;
vector<ll>prime;
int ara[Max+12];
void PrimeInitialize()
{
    ara[0]=1;
    ara[1]=1;
    int i,j;
    for(i=4; i<=Max; i+=2)
        ara[i]=1;

    ll Sq=sqrt(Max);
        prime.pb(2);
    for(i=3; i<=Sq; i+=2)
    {
        if(ara[i]==0)
        {
            prime.pb(i);
            for(j=i*i; j<=Max; j+=i*2)
            {
                ara[j]=1;
            }
        }
    }
    for(i=Sq; i<=Max; i++)
        if(ara[i]==0)prime.pb(i);
}
ll DivisorCount(ll n)
{
    ll ans=1,ps=prime.size(),i,c;

    for(i=0; i<ps && prime[i]<=sqrt(n); i++)
    {
        c=1;
          while(n%prime[i]==0)
          {
              c++;
              n/=prime[i];
          }
       ans*=c;
    }
     if(n>1) ans*=2;

     return ans-1;
}



