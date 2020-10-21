#include<bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<int,int>pii;
typedef pair<int,pair<int,int>>piii;
typedef pair<ll,pair<ll,ll>>plll;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> orderedSet;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define sf(a) scanf("%I64d",&a)
#define pf(a) printf("%I64d\n",a)
#define mem(a,b)     memset(a,b,sizeof(a))
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
#define result(ans) cout<<"Case "<<cas++<<": "<<ans<<endl;
#define pb push_back
#define pp pop_back
#define eb emplace_back
//#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define bug cout<<"BUG"<<endl;
const int Max = 1e6 ;
const int Mod = 1e6 + 3;
const double PI  =3.141592653589793238463;
bool compare(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    if(a==0 || b==0)
        return 0;

    return a/__gcd(a,b)*b;
}

void input(ll ara[],ll n)
{
    for(ll i=1; i<=n; i++)
        cin>>ara[i];
}

ll Fact[Max+10];




long long bigmod(long long b,long long p,long long m)
{
    if(p==0)return 1;

    if(p%2==1){
        long long part1=b%m;
        long long part2=bigmod(b,p-1,m);

        return (part1*part2)%m;
    }
    else if(p%2==0)
    {
        long long half=bigmod(b,p/2,m);

        return (half*half)%m;
    }
}

void precal()
{
    Fact[0]=1;

    for(ll i=1; i<=Max; i++)
    {
        Fact[i]=(Fact[i-1]*i)%Mod;
    }
}

ll ModularMultiplicativeInverse(ll a,ll m)
{
    return bigmod(a,m-2,m);
}

int main()
{

    fastread();

    ll i,j,n,p,t,q,l,cas=1,r;

    precal();

      cin>>t;
  ll ans;

      while(t--)
      {
          cin>>n>>r;

          if(r==0)ans=1;

          else{

          ans=Fact[n]%Mod;

          ll R=((Fact[r]%Mod)*(Fact[n-r]%Mod))%Mod;

        //cout<<ans<<" "

          ans=(ans*((ModularMultiplicativeInverse(R,Mod))%Mod))%Mod;
          }

         // ans=(ans*R)%Mod;

         result(ans)


      }







}
