#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pll;
#define F first
#define S second
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define eb emplace_back
#define vll(v) v.begin(),v.end()
const int Max = 2e5 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;


ll n,m;

vector<ll>adj[Max+10];


bool vis[Max+10];


ll color[Max+10];

void input()
{
      cin>>n>>m;

      ll i,a,b;



      for(i=1; i<=m; i++)
      {
          cin>>a>>b;

          adj[a].eb(b);

          adj[b].eb(a);
      }

}




bool BFS(ll s)
{
      queue<ll>q;



          q.push(s);

          vis[s]=true;

          color[s]=1;

            while(!q.empty())
            {
                  ll u=q.front();

                  q.pop();


                  for(auto x : adj[u])
                  {
                      if(!vis[x])
                      {
                          vis[x]=true;

                          color[x]=((color[u]==1)? 2 : 1);



                          q.push(x);
                      }
                      else if(color[u]==color[x])
                      {
                          return false;
                      }
                  }
            }

            return true;
}


int main()
{

    fastread();
    ll i,j,p,sum=0,k,t,a,b,c,d,cnt=0,q,l,r;

    input();

    bool flag=true;

    for(i=1; i<=n && flag; i++)
        if(!vis[i])
        {
           flag=BFS(i);
        }

    if(flag)
    {
        for(i=1; i<=n; i++)
            cout<<color[i]<<" ";

        cout<<endl;
    }
    else cout<<"IMPOSSIBLE"<<endl;





}

