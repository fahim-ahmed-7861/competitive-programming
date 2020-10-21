#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
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
const ll Max = 1e5;
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

typedef struct
{
    ll pre,now;
}custom;

ll n,m,q;

vector<ll>v[Max+10];



vector<custom>cost(Max+10);

void input()
{
    cin>>n>>q;
    m=n-1;

    ll a,b,i;

    for(i=0; i<m; i++)
    {
        cin>>a>>b;

        v[a].pb(b);
        v[b].pb(a);
    }

    for(i=1; i<=n; i++)
    {
        cin>>cost[i].now;

       // cost[i].pre=cost[i].now;

       // cost[i].now=0;
    }


}

void bfs()
{

   queue<ll>q;

   bool visited[n+10];

   memset(visited,false,sizeof(visited));


      cost[1].pre=cost[1].now;
       cost[1].now=0;

       visited[1]=true;

       q.push(1);


       while(!q.empty())
       {
           ll node=q.front();

           q.pop();

           if(v[node].size()==1 && visited[v[node][0]])
           {
               ll k=v[node][0];

             //  cout<<cost[node].now<<endl;

               cost[node].now+=cost[node].pre;

               //cout<<cost[node].now<<" "<<k<<" "<<node<<" "<<cost[k].pre<<endl;

               visited[node]=true;
           }
           else{

            for(auto x : v[node])
            {
                if(visited[x]==false)
                {
                    visited[x]=true;

                    cost[x].pre=cost[x].now;

                    cost[x].now=cost[node].pre;


                    q.push(x);
                }
            }
           }


       }
}



int main()
{

   fastread();

   ll i,j,p,sum=0,k,t,ver,a,b,c,d,cnt=0;


     string str;

   bool flag=true;

   input();

   char ch;

     // for(ll i=1; i<=n; i++)
       // cout<<i<<" "<<cost[i].now<<" "<<cost[i].pre<<endl;

       // cout<<endl<<endl;

   while(q--)
   {
       bfs();

       //  for(ll i=1; i<=n; i++)
       // cout<<cost[i].pre<<" "<<cost[i].now<<endl;

       // cout<<endl<<endl;

       cin>>ch;

       switch(ch)
       {

           case '+': cin>>ver>>b;

                cost[ver].now=cost[ver].now+b;

           break;

           case '?' :  cin>>ver;

           cout<<cost[ver].now<<endl;


       }




       }










}

