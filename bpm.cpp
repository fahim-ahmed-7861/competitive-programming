#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef int  ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<int,int>pii;
typedef pair<int,pair<int,int>>piii;
typedef pair<ll,pair<ll,ll>>plll;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> orderedSet;
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
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;
bool compare(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
       return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    if(a==0 || b==0)return 0;

    return a/__gcd(a,b)*b;
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//                               MU_Inferno2019
//-------------------------------------------------------------------------------------------------------------------
void input(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)cin>>ara[i];
}
ll n,m;

vector<ll>adj[1000];

int seen[1000];

ll Left[1000],Right[1000];

bool kuhn(int u)
{


    for(int i=0,v; i<adj[u].size(); i++)
    {
        v=adj[u][i];

       if(seen[v])continue;

       seen[v]=1;

      if(Right[v]==-1 || kuhn(Right[v]))
       {
           Right[v]=u;

           Left[u]=v;

           return true;
       }
    }

    return false;
}

void input()
{
    cin>>n>>m;



    for(int i=0,a,b; i<m; i++)
    {
        cin>>a>>b;

        adj[a].pb(b);
    }
}


int main()
{

   fastread();

    memset(Right,-1,sizeof(Right));
     memset(Left,-1,sizeof(Left));

   ll i,j,p,sum=0,k,t,a,b,c,d,cnt=0,q;


     string str;

   bool flag=true;

   input();


     for(i=1; i<=n; i++)
     {
         memset(seen,0,sizeof(seen));


         if(kuhn(i))cnt++;
     }

     cout<<cnt<<endl;






}


/*


10 9
1 6
1 7
1 8
1 9
1 10
2 6
3 7
4 8
4 10

*/
