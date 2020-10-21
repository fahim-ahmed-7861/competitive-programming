#include<bits/stdc++.h>
using namespace std;
typedef int ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
#define pb push_back
#define eb emplace_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define bug cout<<"BUG"<<endl;
const int Max = 2e5 + 10;
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

void input(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)cin>>ara[i];
}


vector<ll>v[Max+10];

ll n,m,root,root1,root2,mx=-1,par[Max+10];


void input()
{
    ll a,b;

    cin>>n;

    for(int i=1; i<n; i++)
    {
        cin>>a>>b;

        v[a].eb(b);

        v[b].eb(a);
    }
}


void DFS(ll s ,ll src, ll level)
{
      if(level>mx)
      {
          mx=level;

          root=s;

      }

      for(auto x : v[s])
      {
          if(x!=src)
          {
              par[x]=s;

              DFS(x,s,level+1);
          }
      }
}

void pathprint()
{
    while(root!=-1)
    {
        cout<<root<<endl;

        root=par[root];
    }
}

int main()
{

   fastread();

   ll i,j,m,p,sum=0,k,t,a,b,c,d,cnt=0,q;


     string str;

   bool flag=true;


     input();

     DFS(1,-1,0);

     root1=root;

     par[root]=-1;

     mx=-1;

     memset(par,-1,sizeof(0));

    DFS(root,-1,0);

    cout<<root<<" "<<root1<<endl;

    pathprint();







}

