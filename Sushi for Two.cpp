#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
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
#define mp make_pair
#define pb push_back
#define pp pop_back
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
bool compare(const pair<int,int> &a, const pair<int,int> &b)
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
//                               MU_Codefighter2019
//-------------------------------------------------------------------------------------------------------------------

void inputa(ll ara[],ll n)
{
    ull sum=0;

    for(int i=0; i<n; i++)
       cin>>ara[i];
}
int main()
{
   fastread();

   ll i,j,n,mx=0,p,sum=0,k,t;

   bool flag=true;

   string str;

   cin>>n;

   ll ara[n+1];

   inputa(ara,n);

   ll lastone=0,lastwo=0;

   for(i=0; i<n; i++)
   {
     if(ara[i]!=ara[i-1])
     {
        switch(ara[i]){

          case 1 :   lastone=1;

          break;

          case 2  :lastwo=1;
        }
     }
     else
     {
         switch(ara[i])
         {
             case 1 : lastone++;
             break;

             case 2 : lastwo++;


         }
     }
      mx=max(mx,min(lastone,lastwo));
   }

   cout<<mx*2<<endl;



}

