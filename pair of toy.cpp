#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;

#define pb push_back
#define pp pop_back
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
       return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//-------------------------------------------------------------------------------------------------------------------


int main()
{
   fastread();

    ll i,j,n,m,k;

   cin>>n>>m;

   k=m/2;


   if(n>=m)
   {

       ll sum=m/2;

       if(m%2==0)sum--;

       if(sum<=0)

       cout<<0<<endl;

       else cout<<sum<<endl;
   }

   else
   {
      // cout<<2<<endl;
       if(k>=n ||  k<1)cout<<0<<endl;

       else{


          cout<<min(n-k,k)<<endl;
       }
   }



}
