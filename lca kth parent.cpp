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


const int Max = 2e5 + 10;


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

    for(i=2; i<=n; i++)
    {
        a=i;
        cin>>b;


        adj[a].eb(b);

        adj[b].eb(a);
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

ll kth_parent(ll v,ll k)
{
    if(k<=2)return P[v][k-1];
   ll ans,i;


         while(v>=1)
         {


             for(i=0; i<=30; i++)
             {
                ans=1<<i;

                if(ans==k)
                {
                    return P[v][i];
                }

                else if(ans>k)
                {
                    i--;

                    k-=(1<<(i));
                    v=P[v][i];
                    break;
                }
             }
         }

         return -1;
}

int main()
{

   fastread();

   ll i,j,p,sum=0,k,t,a,b,c,d,cnt=0,q,u,v;

     input();

     DFS(1,-1,0);

     initLCA();

     while(m--)
     {
         cin>>v>>k;

         cout<<kth_parent(v,k)<<endl;


     }




}
