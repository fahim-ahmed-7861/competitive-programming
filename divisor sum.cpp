#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll divsum(ll n)
{
    ll sq=sqrt(n),sum=0,i;

    for(i=1; i<=sq; i++)
    {
        if(n%i==0)
        {
            sum+=i;

            if(n/i!=i)sum+=n/i;
        }
    }

    return sum;
}
int main()
{
      ll n,t;

      cin>>t;

      while(t--){

      cin>>n;

      cout<<divsum(n)<<endl;
      }
}
