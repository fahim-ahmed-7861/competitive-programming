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

ll par[Max+10];

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



void pathprint()
{
    vector<ll>ans;

    ll x=n;



       while(x!=1)
       {
          ans.eb(x);

          x=par[x];
       }
       ans.eb(1);


       cout<<ans.size()<<endl;

       for(ll i=ans.size()-1; i>=0; i--)
        cout<<ans[i]<<" ";
       cout<<endl;
}
bool BFS(ll s)
{
      queue<ll>q;

      par[1]=1;

          q.push(s);

          vis[s]=true;

            while(!q.empty())
            {
                  ll u=q.front();

                  q.pop();

                  if(u==n)
                    return true;

                  for(auto x : adj[u])
                  {
                      if(!vis[x])
                      {
                          vis[x]=true;

                          par[x]=u;

                          q.push(x);
                      }
                  }
            }

            return false;
}


int main()
{

    fastread();
    ll i,j,p,sum=0,k,t,a,b,c,d,cnt=0,q,l,r;

    input();

    if(!BFS(1))
    {
        cout<<"IMPOSSIBLE"<<endl;

        return 0;
    }

    pathprint();




}

