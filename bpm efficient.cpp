#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef int ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;

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
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define bug cout<<"BUG"<<endl;
const int Max=2e5;
vector<ll>adj[Max+10];

ll match[Max+10],n;

map<ll,ll>vis;


bool DFS(ll u)
{
    for(auto x : adj[u])
    {
        ll v=x;

        if(vis[v]==0)
        {
            vis[v]=1;

            if(match[v]==-1 || DFS(match[v]))
            {
                match[v]=u;

                return true;
            }
        }
    }

    return false;
}

ll BPM()
{
    memset(match,-1,sizeof(match));

    ll cnt=0;

    for(ll i=1; i<=n; i++)
    {
        if(adj[i].empty()==0)
        {

            vis.clear();

             if(DFS(i))
                {
                    cnt++;
                }
        }
    }
    return cnt;
}

int main()
{

    fastread();
    ll i,a,b;
    cin>>n;
     for(i=1; i<n; i++)
     {
         cin>>a>>b;
         adj[a].eb(b);
         adj[b].eb(a);
     }

     cout<<BPM()/2<<endl;
}
