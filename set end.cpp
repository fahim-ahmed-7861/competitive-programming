#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef int ll;
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
//#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define bug cout<<"BUG"<<endl;
const int Max = 2e5;
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

int main()
{

   fastread();

   ll i,j,n,m,p,sum=0,k,t,a,b,l,r,c,d,cnt=0,q;


    cin>>t;

    while(t--)
    {

       cin>>n;

       ll goal=-1,opp=-1,test;

       while(n--)
       {
           cin>>test>>a>>b;


           if(test==1)
           {
               cout<<"YES"<<endl;

               goal=a;

               opp=b;
           }
           else
           {
               if(a==b)
               {
                   goal=a;

                   opp=b;

                   cout<<"YES"<<endl;
               }

               else if(goal==-1)
               {
                   cout<<"NO"<<endl;
               }
               else if((opp<=a && goal<=a) && (opp<=b && goal<=b))
                       cout<<"NO"<<endl;

              else
              {
                  //cout<<goal<<" "<<a<<" "<<b<<endl;

                  if(opp<=a && a<goal)
                  {
                      cout<<"YES"<<endl;

                      opp=a;
                      goal=b;
                  }

                  else if(goal<=a && a<opp)
                  {
                       cout<<"YES"<<endl;

                      opp=b;
                      goal=a;
                  }
                  else if(opp<=b && b<goal)
                  {
                      cout<<"YES"<<endl;

                      opp=b;
                      goal=a;
                  }

                  else if(goal<=b && b<opp)
                  {
                       cout<<"YES"<<endl;

                      opp=a;
                      goal=b;
                  }

                  else cout<<"NO"<<endl;
              }
           }
       }

    }








}

