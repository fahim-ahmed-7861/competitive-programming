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
const int Max = 1e5 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;


ll ara[Max+10];

vector<ll>tree[5*Max];


void build_tree(ll l, ll r, ll node)
{
    if(l==r)
    {
        tree[node].pb(ara[l]);

        return ;
    }

    ll mid=(l+r)/2;

    ll left=node*2,right=(node*2)+1;

    build_tree(l,mid,left);
    build_tree(mid+1,r,right);

    merge(tree[left].begin(),tree[left].end(),tree[right].begin(),tree[right].end(),back_inserter(tree[node]));
}

ll query(ll L,ll R,ll l,ll r,ll node, ll k)
{
    if(R<l || r<L)
        return 0;

    else if(L<=l && r<=R)
        return lower_bound(tree[node].begin(),tree[node].end(),k)-tree[node].begin();

    ll mid=(l+r)/2;

    return query(L,R,l,mid,node*2,k)+query(L,R,mid+1,r,(node*2)+1,k);

}
int main()
{

   fastread();

   ll i,j,n,m,p,sum=0,k,t,a,b,c,d,cnt=0,q;


     string str;

   bool flag=true;

   cin>>n;

   for(i=1; i<=n; i++)
    cin>>ara[i];

    build_tree(1,n,1);

    cout<<query(2,4,1,n,1,6)<<endl;





}
