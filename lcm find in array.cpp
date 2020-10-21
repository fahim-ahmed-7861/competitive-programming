#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool status[10002];
ll ara[10002],pt;

ll Max=10002;

//vector<ll int>prime;

/*void sieve()
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
}*/

vector<ll>prime;
void sieve()
{
    ll m=sqrt(Max),N=Max;

    ll i;
    ara[1]=ara[0]=1;
    for(i=4; i<N; i+=2)
        ara[i]=1;

        prime.push_back(2);

    for(i=3; i<=m; i+=2)
    {
        if(ara[i]==0)
        {
            prime.push_back(i);
        for(int j=i*i; j<N;  j+=i*2)

            ara[j]=1;
        }
    }
    for(i=m; i<N; i++)
    {
        if(ara[i]==0)
            prime.push_back(i);
    }
     pt=prime.size();

     //cout<<pt<<endl;

    /* for(auto x : p)
        cout<<x<<endl;*/


}
ll int fact[10001];
string multy(string a,ll b)
{
    int carry = 0 , len = a.size();
    for(int i=0;i<len;i++)
    {
        carry += (a[i]-'0')*b;
        a[i] = (carry%10)+'0';
        carry /= 10;
    }
    while(carry)
    {
        a += (carry%10)+'0';
        carry /= 10;
    }
    return a;
}


int main()
{
    ll int t,n,x,sq,mul,rs,cas=1;
    sieve();
     cin>>t;


    for(ll int ca=1; ca<=t; ca++)
    {
        cin>>n;

        memset(fact,0,sizeof(fact));

        for(ll int j=0; j<n; j++)
        {
            cin>>x;

            sq=sqrt(x);

            for(ll int i=0; i<prime.size() and prime[i]<=sq; i++)
            {
                mul=1;
                if(x%prime[i]==0)
                {

                    ll c=0;

                    while(x%prime[i]==0)
                    {
                        mul=mul*prime[i];
                        x=x/prime[i];
                        c++;
                    }
                   // mul=mul/prime[i];
                    fact[prime[i]]=max(fact[prime[i]],mul);
                }
            }
            if(x!=1)
            {
                fact[x]=max(fact[x],x);
            }
        }

        string L="1";
        for(ll int i=1; i<=10000; i++)
        {
            if(fact[i]!=0)
            {
               // cout<<fact[i]<<" "<<i<<endl;
                L=multy(L,fact[i]);
            }
        }

         reverse(L.begin(),L.end());

        cout << "Case " << cas++ << ": " << L << endl;

    }

}
