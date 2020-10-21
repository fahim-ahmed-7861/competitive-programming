#include<bits/stdc++.h>
using namespace std;
typedef int ll;

typedef pair<ll,ll>pll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define F first
#define S second
#define pb push_back
#define eb emplace_back

const int Max = 110 + 10;


ll residualCapacity[Max][Max] , capacity[Max][Max],n,m;

ll par[Max] , a[Max];

bool vis[Max];

vector<ll>adj[Max];

bool BFS(ll s,ll t)
{
        memset(vis,false,sizeof(vis));
        queue<ll>q;

      par[s]=s;

        q.push(s);

        vis[s]=true;


         while(!q.empty())
         {
           ll u=q.front();

            q.pop();

              for(auto v : adj[u])
              {
                  if(!vis[v] && residualCapacity[u][v])
                  {
                      vis[v]=true;

                      q.push(v);

                      par[v]=u;
                  }
              }
         }

         return vis[t];



}

ll fordFulkerson(ll s,ll e)
{
    ll i,j,maxflow=0;

      for(i=0; i<=Max; i++)
        for(j=0; j<=Max; j++)
           residualCapacity[i][j]=capacity[i][j];


        while(BFS(s,e))
        {
              ll cur=e,flow=INT_MAX;

              while(cur!=s)
              {
                  flow=min(flow,residualCapacity[par[cur]][cur]);

                  cur=par[cur];
              }

              cur=e;
              maxflow+=flow;

             while(cur!=s)
              {
                  residualCapacity[par[cur]][cur]-=flow;

                  residualCapacity[cur][par[cur]]+=flow;

                  cur=par[cur];
              }
        }

        return maxflow;
}


void input()
{
    ll a,b,c;





    for(ll i=1; i<=m; i++)
    {
        cin>>a>>b>>c;

        capacity[a][b]+=c;

      //  capacity[b][a]+=c;

        adj[a].eb(b);

        adj[b].eb(a);


    }


}


void Clear()
{
      for(ll i=0; i<=n; i++)
        adj[i].clear();

        memset(capacity,0,sizeof(capacity));
}
int main()
{

   fastread();

   ll i,j,p,sum=0,k,a,b,c,d,cnt=0,q,e,s,t,cas=1;



      cin>>p;

       while(p--)
       {



   cin>>n>>s>>e>>m;

    Clear();

      input();



      cout<<"Case "<<cas++<<": "<<fordFulkerson(s,e)<<endl;
       }








}

/*

6 7
1 2 2
1 3 5
2 4 3
3 4 3
2 5 1
4 6 4
5 6 4
1 6

*/

/*

1 2 20
2 4 100
3 4 5
1 3 20
2 3 5

*/

