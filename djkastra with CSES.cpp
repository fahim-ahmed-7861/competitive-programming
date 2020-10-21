#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pll;
#define F first
#define S second
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define eb emplace_back
#define vll(v) v.begin(),v.end()
const int Max = 2e5 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;


int n,m;

vector<pair<int,ll>>adj[Max+10];


bool vis[Max+10],flag;

ll cost[Max+10];



void input()
{
    scanf("%d %d",&n,&m);

    int i,a,b,c;



    for(i=1; i<=m; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        adj[a].eb(b,c);

        //adj[b].eb(a,c);
    }

}



void Djkastra(ll ss)
{
    for(ll i=1; i<=n; i++)
        cost[i]=1e18;
   priority_queue<pll,vector<pll>,greater<pll> > pq;

    pq.push({0ll,ss});

    cost[ss]=0;

    ll a;

    vis[1]=true;

           while(!pq.empty())
           {
                a=pq.top().S;


                pq.pop();




                 for(auto x : adj[a])
                 {
                     if(!vis[a] && cost[a]+x.S<cost[x.F])
                     {


                         cost[x.F]=cost[a]+x.S;


                        vis[x.F]=true;

                         pq.push({cost[x.F],x.F});
                     }

                 }
           }
}

int main()
{

    fastread();
    ll i,j,p,sum=0,k,t,a,b,c,d,cnt=0,q,l,r;


    input();
    Djkastra(1);


    //cost[1]=0;
    for(i=1; i<=n; i++)
       printf("%lld ",cost[i]);




}
