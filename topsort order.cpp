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
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;
bool compare(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.first > b.first);
}

ll n,m;

vector<pll>ans;
vector<ll>adj[Max+10];
ll vis[Max+10];

bool cycle;
vector<ll>order;

ll id;

void clr()
{
    id=1;
    order.clear();
    ans.clear();
    cycle=false;
    for(ll i=0; i<=n; i++)
    {
        adj[i].clear();

        vis[i]=0;
    }



}
void input()
{
    cin>>n>>m;

    ll a,b,c,i;

    clr();

    for(i=0; i<m; i++)
    {
        cin>>c>>a>>b;

        if(c)adj[a].eb(b),ans.eb(a,b);

        else ans.eb(a,b);

    }
}

void dfs(ll s)
{
    vis[s]=1;

    for(auto x : adj[s])
    {
        if(vis[x]==0)
            dfs(x);

    }

    order.eb(s);
}
int main()
{

    fastread();

    ll i,j,p,a,sum=0,k,t,b,c,d,cnt=0,q,l,r;

    cin>>t;


    while(t--)
    {
        input();
        id=0;

        for(i=1; i<=n; i++)
        {
            if(vis[i]==0)
                dfs(i);
        }

        //cout<<cycle<<endl;


        ll pos[n+2];

        ll i=1;

        reverse(vll(order));

        for(auto  x : order)
        {
            pos[x]=i;
            i++;


        }

        cycle=false;

        for(i=1; i<=n; i++)
        {
            for(auto j  : adj[i])
            {
                if(pos[j]<pos[i])
                {
                    cycle=true;
                    break;
                }
            }
        }

        if(cycle)cout<<"NO"<<endl;

        else
        {
            cout<<"YES"<<endl;

            for(auto x : ans)
            {
                if(pos[x.F]>pos[x.S])swap(x.F,x.S);

                cout<<x.F<<" "<<x.S<<endl;
            }
        }

    }




}

