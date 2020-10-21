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

struct Edge
{
    int a, b, cost;
};

int n, m;
vector<Edge> edges;
const int INF = 1000000000;

ll d[Max+10];

ll p[Max+10];

void solve()
{
    // vector<ll> d(n);
    //vector<ll> p(n, -1);
    int x;
    for (int i = 0; i < n; ++i)
    {
        x = -1;
        for (Edge e : edges)
        {
            if (d[e.a] + e.cost < d[e.b])
            {
                d[e.b] = d[e.a] + e.cost;
                p[e.b] = e.a;
                x = e.b;

                //cout<<x<<" "<<x<<endl;
            }
        }
    }

  //  cout<<x<<endl;

    if (x == -1)
    {
        cout << "NO";
    }
    else
    {
        cout<<"YES"<<endl;

       for (int i = 0; i < n; ++i)
            x = p[x];

        vector<int> cycle;
        for (int v = x;; v = p[v])
        {
            cycle.push_back(v);
            if (v == x && cycle.size() > 1)
                break;
        }
        reverse(cycle.begin(), cycle.end());


        for (int v : cycle)
            cout << v << ' ';
        cout << endl;
    }
}

int main()
{
    fastread();


    memset(p,-1,sizeof(p));



    cin>>n>>m;

    ll a,b,c,i;

    for(i=0; i<m; i++)
    {
        cin>>a>>b>>c;

        edges.pb(Edge{a,b,c});


    }

    solve();
}
