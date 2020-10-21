#include<bits/stdc++.h>
using namespace std;
typedef int ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define F first
#define S second
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define eb emplace_back
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define minheap int,vector<int>,greater<int>


const int Max = 1e5 + 10;


vector<ll>adj[Max+10];

ll P[Max][30], T[Max], dep[Max],n,m;



void DFS(ll src,ll par,ll lev)
{
    dep[src]=lev;

    T[src]=par;

       for(auto x : adj[src])
       {
            if(x!=par)DFS(x,src,lev+1);
       }

       return ;
}

void input()
{
    cin>>n>>m;

    ll a,i,b;

    for(i=0; i<m; i++)
    {
        cin>>a>>b;

        adj[a].eb(b);
    }

    return ;
}

void initLCA()
{
    memset(P,-1,sizeof(P));

    ll i,j;


    for(i=1; i<=n; i++)
        P[i][0]=T[i];

    for(j=1; 1<<j <n ; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(P[i][j-1]!=-1)
            P[i][j]=P[P[i][j-1]][j-1];
        }
    }
}

ll query(ll u,ll v)
{
   if(dep[u]<dep[v])
    swap(u,v);

   ll log=1,i;

     while(1)
     {
         ll next=log+1;

         if( (1<<next)>dep[u])
            break;

         log++;
     }

     for(i=log; i>=0; i--)
     {
         if(dep[u]-(1<<i)>=dep[v])
          u=P[u][i];
     }

     if(u==v)
        return u;

     for(i=log; i>=0; i--)
     {
         if(P[u][i]!=-1 && P[u][i]!=P[v][i])
         {
             u=P[u][i];
             v=P[v][i];
         }

     }

     return T[u];
}

int main()
{

   fastread();

   ll i,j,p,sum=0,k,t,a,b,c,d,cnt=0,q,u,v;

     input();

     DFS(1,1,0);

     initLCA();

     cin>>q;

     while(q--)
     {
       // cout<<"sdf"<<endl;
         cin>>u>>v;

         cout<<query(u,v)<<endl;
     }



}
