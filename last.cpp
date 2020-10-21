#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define F first
#define S second
#define pb push_back

const ll MAX = 2e5;

ll n,m,q;

vector<ll>vec[MAX+5];

vector<pll>cost(MAX+5);


void input_cost()
{
    for(ll i=1; i<=n; i++)
        cin>>cost[i].F;
}
void input()
{
    cin>>n>>q;
    m=n-1;

    ll u,v,a,b,c,d,f,i;

    for(i=0; i<m; i++)
    {
        cin>>u>>v;

        vec[u].pb(v);
        vec[v].pb(u);
    }

}


void DFS()
{

    stack<ll>s;

    bool vis[n+10];

    memset(vis,false,sizeof(vis));


    cost[1].S=cost[1].F;
    cost[1].F=0;

    vis[1]=true;

    s.push(1);


    while(!s.empty())
    {
        ll node=s.top();

        s.pop();

        if(vec[node].size()==1 && vis[vec[node][0]])
        {
            ll k=vec[node][0];


            cost[node].F+=cost[node].S;



            vis[node]=true;
        }
        else
        {

            for(auto x : vec[node])
            {
                if(vis[x]==false)
                {
                    vis[x]=true;

                    cost[x].S=cost[x].F;

                    cost[x].F=cost[node].S;


                    s.push(x);
                }
            }
        }


    }
}



int main()
{

    fastread();

    char test;


    ll i,j,p,sum=0,k,t,ver,a,b,c,d,cnt=0,lll,dfsd,dfsdd,sdfsd,dfdf,sdf,sfdsf,sdfsdfsdf,dsfdfsd,fd,fsd,sss;


    string str;

    bool flag=true;

    input();

    input_cost();



    while(q--)
    {
        DFS();

        cin>>test;

        if(test=='+')
        {
            cin>>ver>>b;

            cost[ver].F=cost[ver].F+b;

        }

        else
        {
            cin>>ver;

            cout<<cost[ver].F<<endl;
        }


    }


return 0;




}

