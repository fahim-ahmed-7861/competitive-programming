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
const int Max = 1e6 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;


ll n,cum[Max+10];

ll cal(ll m)
{

    ll ans=0,i;

    for(i=1; i<=n; i++)
        ans+=min(cum[i]%m,m-(cum[i]%m));

    return ans;
}
int main()
{

    fastread();

    ll i,j,m,p,a,sum=0,k,t,b,c,d,cnt=0,q,l,r;


      set<ll>foo,baz;

      foo.insert(45);
      foo.insert(4);
      baz.insert(4);
      baz.insert(5645);
      baz.insert(1);

   merge(foo.begin(), foo.end(),
      baz.begin(), baz.end(),
      inserter(baz, baz.begin()));

       for(auto x : baz)cout<<x<<endl;


}

