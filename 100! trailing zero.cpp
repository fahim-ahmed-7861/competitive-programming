#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef  long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<int,int>pii;
typedef pair<int,pair<int,int>>piii;
typedef pair<ll,pair<ll,ll>>plll;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> orderedSet;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mem(a,b)     memset(a,b,sizeof(a))
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
#define CASE(cas) printf("Case %d: ",cas++)
#define pb push_back
#define pp pop_back
#define eb emplace_back
# define result(ans) cout<<"Case "<<cas++<<": "<<ans<<endl
//#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
const int Max = 1e6 ;
const int INF = 1e9 + 7;
const double PI  =3.141592653589793238463;

double  ara[Max+10];





int main()
{

      fastread();


     ll t,n;

     cin>>t;

     while(t--)
     {
         cin>>n;

         ll ans=0;

         ll f=5;

         while(f<=n)
         {

             ans+=n/f;


             f*=5;

         }

         cout<<ans<<endl;
     }



}
