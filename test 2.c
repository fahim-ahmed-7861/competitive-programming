
#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool status[10002];

vector<ll int>prime;

void sieve()
{
    ll int n=10000;
    ll int sq=sqrt(n);

    for(ll int i=4; i<=n; i=i+2) status[i]=true;

    prime.push_back(2);

    for(ll int i=3; i<=sq; i=i+2)
    {
        if(status[i]==false)
        {
            for(int j=i*i; j<=n; j=j+i) status[j]=true;
        }
    }
    status[1]=1;
    status[0]=1;

    for(ll int i=3; i<=n; i=i+2)
    {
        if(status[i]==0) prime.push_back(i);
    }
}
ll int res[1000000];
ll int fact[10001];
ll int multiply(ll int x,ll int res_size)
{
    ll int carry = 0;

    for (ll int i=0; i<res_size; i++)
    {
        ll int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}


int main()
{
    ll int t,n,x,sq,mul,rs;
    sieve();
    scanf("%lld",&t);

    for(ll int ca=1; ca<=t; ca++)
    {
        scanf("%lld",&n);
        memset(res,0,sizeof(res));
        memset(fact,0,sizeof(fact));
        for(ll int j=0; j<n; j++)
        {
            scanf("%lld",&x);
            sq=sqrt(x);

            for(ll int i=0; i<prime.size() and prime[i]<=sq; i++)
            {
                mul=prime[i];
                if(x%prime[i]==0)
                {
                    while(x%prime[i]==0)
                    {
                        mul=mul*prime[i];
                        x=x/prime[i];
                    }
                    mul=mul/prime[i];
                    fact[prime[i]]=max(fact[prime[i]],mul);
                }
            }
            if(x!=1)
            {
                fact[x]=max(fact[x],x);
            }
        }
        res[0]=1;
        rs=1;
        for(ll int i=1; i<=10000; i++)
        {
            if(fact[i]!=0)
            {
                rs=multiply(fact[i],rs);
            }
        }
        printf("Case %lld: ",ca);
        for(ll int i=rs-1; i>=0; i-- )
        {
            printf("%lld",res[i]);
        }
        printf("\n");
    }

}
