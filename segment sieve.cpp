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
#define minheap int,vector<int>,greater<int>
#define pb push_back
#define eb emplace_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define bug cout<<"BUG"<<endl;
const ll N = 1e5 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;


bool ara[N+1];
vector<int>p;
ll pt;

void prime()
{

    int i,m=sqrt(N);
    ara[1]=ara[0]=1;
    for(i=4; i<=N; i+=2)
        ara[i]=1;

        p.push_back(2);

    for(i=3; i<=m; i+=2)
    {
        if(ara[i]==0)
        {
            p.push_back(i);
        for(int j=i*i; j<=N;  j+=i*2)

            ara[j]=1;
        }
    }
    for(i=m; i<=N; i++)
    {
        if(ara[i]==0)
            p.push_back(i);
    }
     pt=p.size();

     //cout<<pt<<endl;


}


ll segment_sievePrint(ll l,ll r)
{
    bool isprime[r-l+10];

   for(ll i=0; i<=r-l; i++)
   isprime[i]=true;

    if(l==1)isprime[0]=false;


      for(ll i=0; p[i]*p[i]<=r; i++)
      {
          ll cur=p[i];

          ll base=cur*cur;

          if(base<l)
            base=((l+cur-1)/cur)*cur;

          for(ll j=base; j<=r; j+=cur)
            isprime[j-l]=false;
      }

      for(ll j=0; j<=r-l; j++)
      {
          if(isprime[j])
            cout<<j+l<<endl;
      }


}



ll segment_sieveCount(ll l,ll r)
{
    ll cnt=0;

    bool isprime[r-l+10];

   for(ll i=0; i<=r-l; i++)
   isprime[i]=true;

    if(l==1)isprime[0]=false;


      for(ll i=0; p[i]*p[i]<=r; i++)
      {
          ll cur=p[i];

          ll base=cur*cur;

          if(base<l)
            base=((l+cur-1)/cur)*cur;

          for(ll j=base; j<=r; j+=cur)
            isprime[j-l]=false;
      }

      for(ll j=0; j<=r-l; j++)
      {
          if(isprime[j])
            cnt++;
      }

      return cnt;


}












int main()
{

   fastread();

   ll i,j,n,m,p,sum=0,k,t,a,b,c,d,cnt=0,q;

   prime();







}

