#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,int>pii;
typedef pair<int,pair<int,int>>piii;
typedef pair<ll,pair<ll,ll>>plll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define sf(a) scanf("%I64d",&a)
#define pf(a) printf("%I64d\n",a)
#define mem(a,b)     memset(a,b,sizeof(a))
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
//#define mp make_pair
#define pb push_back
#define pp pop_back
#define eb emplace_back
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
const int Max = 10000 + 1;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;


//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//                               MU_Codefighter2019
//-------------------------------------------------------------------------------------------------------------------
vector<piii>adj;

int par[Max+10];

int n,m,a;

bool compare(const piii &c ,const piii &d)
{
    return c.S.S<d.S.S;


}

void input()
{
    int u1,u2,w;

    scanf("%d %d %d",&n,&m,&a);

    for(int i=0; i<m; i++)
    {
        scanf("%d %d %d",&u1,&u2,&w);

        adj.pb({u1,{u2,w}});
    }
}

void makeset()
{
    for(int i=0; i<=Max; i++)par[i]=i;
}

int Find(int u)
{
    if(par[u]==u)return u;

    else return par[u]=Find(par[u]);
}

bool unioin(int u,int v)
{
    u=Find(u);

    v=Find(v);

    if(u==v)return false;

    else{

           par[u]=v;

            return true;
    }
}

pii Kruskal()
{
    sort(adj.begin(),adj.end(),compare);

    int path=0,u,v,w;

    long long sum=0;

    pair<ll,int>x;


    for(int i=0; i<adj.size() && path<n-1; i++)
    {
        u=adj[i].F;

        v=adj[i].S.F;

        w=adj[i].S.S;

        if(unioin(u,v) && a>w)
        {
            path++;

            sum+=w;
        }


    }

    x.F=(sum)+(a*(n-path));

    x.S=n-path;

    return x;
}

void Clear()
{
    adj.clear();
}

int main()
{
      fastread();

       int t,cas=1;

       scanf("%d",&t);

       while(t--)
       {

           Clear();

           input();

           makeset();

          pii ans = Kruskal();

        printf("Case %d: %lld %d\n",cas++,ans.F,ans.S);
       }




}

/*

2

4 4 100

1 2 10

4 3 12

4 1 41

2 3 23

5 3 1000

1 2 20

4 5 40

3 2 30
*/
