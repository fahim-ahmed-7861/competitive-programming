/*
    -ensure correct output format
    -ensure printing required output
    -reread the problem statement
  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define minheap int,vector<int>,greater<int>
#define pb push_back
#define eb emplace_back
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

void input(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)cin>>ara[i];
}
void print(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)
        cout<<ara[i]<<" ";
    cout<<endl;
}


ll ara[100][100];

ll n,m,k;

ll ans=0;

ll dp[70][72][72][72];

void call(ll i,ll j,ll sum,ll track)
{


   // cout<<i<<" "<<j<<endl;
    if(track==m/2)
        i++,j=1,track=0;

    if(sum%k==0)
    {
        ans=max(ans,sum);
    }

   if(i>n)return ;

   if(j>m)
   {
       j=1;
       track=0;
       i++;
   }

   if(i>n)return ;

   if(dp[i][j][track][sum%k]==1)
    return ;


    dp[i][j][track][sum%k]=1;


      call(i,j+1,sum+ara[i][j],track+1);

      call(i,j+1,sum,track);

      call(i+1,1,sum,0);
}

int main()
{

   fastread();


   ll i,j;

   memset(dp,-1,sizeof(dp));

      bool flag=false;

      string str;

      cin>>n>>m>>k;

      for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
          cin>>ara[i][j];

          call(1,1,0,0);

          cout<<ans<<endl;






}
