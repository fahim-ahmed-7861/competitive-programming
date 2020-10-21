#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef int ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<int,int>pii;
typedef pair<pair<int,int>,int>piii;
typedef pair<ll,pair<ll,ll>>plll;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> orderedSet;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define sf(a) scanf("%I64d",&a)
#define pf(a) printf("%I64d\n",a)
#define mem(a,b)     memset(a,b,sizeof(a))

#define F first
#define S second

//#define mp make_pair
#define pb push_back
#define pp pop_back
#define eb emplace_back
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)

const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;

int n,m;

char ara[101][101];

int vis[101][101];


pii dxy[ ]= { {0,1},{1,0},{-1,0},{0,-1} };

pii X,C,S;
ll smi=Max,cmi=Max;



void input()
{
    int i,j;

    for(i=0; i<n; i++)
    {
        scanf("%s",ara[i]);
    }
}

bool OK(ll i, ll j)
{
    if(ara[i][j]=='#' || i==n || j==m || vis[i][j] || i<0 || j<0 || ara[i][j]=='S' || ara[i][j]=='*')
        return false;

    else
        return true;
}

int BFS(pii S)
{
    ll mi=Max;

    queue<piii>q;


    vis[S.F][S.S]=1;

    q.push({S,0});


    while(!q.empty())
    {
        piii u=q.front();

        q.pop();

        if(ara[u.F.F][u.F.S]=='X')return u.S;

        for(int i=0; i<4; i++)
        {
            ll x=u.F.F+dxy[i].F, y=u.F.S+dxy[i].S;

            if(OK(x,y))
            {
                piii v;

                v.S=u.S+1;

                v.F= {x,y};

                vis[x][y]=1;


                q.push(v);

            }

        }
    }

    return mi;


}

void check()
{
    ll mi=Max,i,j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            if(ara[i][j]=='*')
            {
               memset(vis,0,sizeof(vis));

               //BFS(i,j);

               cmi=min(cmi,BFS({i,j}));

            }
            else if(ara[i][j]=='S')
            {
                memset(vis,0,sizeof(vis));

                smi=min(smi,BFS({i,j}));
            }

    }


}



int main()
{
    fastread();


    int t;

    scanf("%d",&t);

    while(t--)
    {


        char ch;
        scanf("%d %d",&n,&m);

        input();

       smi=Max;

       cmi=Max;

       check();


        if(smi<cmi)printf("yes\n");

        else printf("no\n");
    }



}
