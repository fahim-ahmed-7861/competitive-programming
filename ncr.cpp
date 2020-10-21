/*
    -ensure correct output format
    -ensure printing required output
    -reread the problem statement
  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define F first
#define S second
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define minheap int,vector<int>,greater<int>
#define pb push_back
#define eb emplace_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define bug cout<<"BUG"<<endl;
const int Max = 3e5 + 10;
const int Mod =998244353;
const double PI  =3.141592653589793238463;
bool compare(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    if(a==0 || b==0)return 0;

    return a/__gcd(a,b)*b;
}

void input(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)cin>>ara[i];
}
void print(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)
        cout<<ara[i]<<" ";
    cout<<endl;
}


ll fact[Max+10];
long long bigmod(long long b,long long p,ll mod)
{

    if(p==0)return 1ll;

    ll x=bigmod(b,p/2,mod);

    x=(x*x)%mod;

    if(p&1)x=(x*b)%mod;

    return x;
}


void init()
{
    fact[0]=1;

    for(ll i=1; i<=Max; i++)
    {
        fact[i]=(i*fact[i-1])%Mod;
    }
}

ll NCR(ll n,ll r)
{
    return (fact[n]*bigmod((fact[r]*fact[n-r])%Mod,Mod-2,Mod))%Mod;

}

int main()
{

    fastread();

    ll i,j,n,m,c,p,a,sum=0,k,t,b,d,cnt=0,q,l,r,ans=0;

    bool flag=false;

    string str;


    init();

    cout<<NCR(4,2)<<endl;


    cin>>n>>k;

    vector<pll>v;

    for(i=0; i<n; i++)
    {
        cin>>a>>b;

        v.eb(a,-1);

        v.eb(b,0);


    }

    sort(vll(v));

    cnt=0;

    for(auto [s,point] : v)
    {
        if(~point)
            cnt--;

        else {
                cnt++;

        if(cnt>=k)
            ans=(ans+NCR(cnt-1,k-1))%Mod;
        }


    }

    cout<<ans<<endl;
}
//https://codeforces.com/contest/1420/problem/D



