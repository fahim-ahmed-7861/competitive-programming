#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef unsigned int ll;
//typedef unsigned long long ull;
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
const int Max = 1e8 ;
const int N = 1e8 ;
const int Mod = 4294967296;
const int pz=5761455;
const double PI  =3.141592653589793238463;
bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    if(a==0 || b==0)
        return 0;

    return a/__gcd(a,b)*b;
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//                               MU_Codefighter2019
//-------------------------------------------------------------------------------------------------------------------

ll status[(Max/32)+10];

ll prime[pz+100];

ll dp[pz+10],cnt=0;

ll Set(ll n,ll pos)
{
    return n= (n | (1<<pos));
}

bool check(ll n,ll pos)
{

    return (bool) (n & (1<<pos));
}

void sieve()
{
     ll i, j, sqrtN;

     sqrtN = ll( sqrt( N ) );

   prime[cnt++]=2;

     for( i = 3; i <= sqrtN; i += 2 )
     {
         if( check(status[i>>5],i&31)==0)
         {

             for( j = i*i; j <= N; j += (i<<1) )
             {
                 status[j>>5]=Set(status[j>>5],j & 31)   ;
             }
         }
     }
     for(i=3;i<=N;i+=2)
         if( check(status[i>>5],i&31)==0)
       prime[cnt++]=i;

}

void precal()
{
    dp[0]=2;

    ll i;

    for(i=1; i<pz; i++)
        dp[i]=dp[i-1]*prime[i];
}
ll product(ll n)
{
    ll sz=sqrt(n),ans=1,i;

    for(i=0;  prime[i]<=sz; i++)
    {
        ll temp=n;

        temp/=prime[i];

        while(temp>=prime[i])
        {
            ans*=prime[i];

            temp/=prime[i];
        }
    }


    return ans;
}


int main()
{
  sieve();

 precal();

   ll t,n,ans,cas=1;
   cin>>t;

   while(t--)
   {
     cin>>n;


      ans=product(n);

      ll pos=upper_bound(prime,prime+pz,n)-prime;

      pos--;

      ans*=dp[pos];

      cout<<"Case "<<cas++<<": "<<ans<<endl;//2520
   }
}


