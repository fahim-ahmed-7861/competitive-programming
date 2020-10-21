
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long bigmod(long long b,long long p,ll mod)
{

   if(p==0)return 1ll;

   ll x=bigmod(b,p/2,mod);

    x=(x*x)%mod;

   if(p&1)x=(x*b)%mod;

   return x;
}


int main()
{

}
