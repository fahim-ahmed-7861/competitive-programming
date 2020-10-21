#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<char,char>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define sf(a) scanf("%I64d",&a)
#define pf(a) printf("%I64d\n",a)
#define mem(a,b)     memset(a,b,sizeof(a))
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
#define mp make_pair
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
    if(a==0 || b==0)return 0;

    return a/__gcd(a,b)*b;
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//                               MU_Codefighter2018
//-------------------------------------------------------------------------------------------------------------------

vector<char>v[200];
 string str,ktr;

 vector<pll>ans;
ll n;
bool visited[200];

void DFS(char ch)
{
    visited[ch]=true;

    for(auto x : v[ch])
    {
        if(!visited[x])
        {
            ans.pb(mp(ch,x));

            DFS(x);
        }
    }
}

void makerelation()
{
     for(int i=0; i<n; i++)
      {
          v[str[i]].pb(ktr[i]);

          v[ktr[i]].pb(str[i]);
      }

}

void solve()
{
   for(char i='a'; i<='z'; i++)
   {
       if(visited[i]==false)
       {
           DFS(i);
       }
   }
}

void print()
{
    cout<<ans.size()<<endl;

    for(auto x : ans)
        cout<<x.F<<" "<<x.S<<endl;
}


int main()
{
   fastread();


   ll i;

   cin>>n;

    cin>>str>>ktr;

    makerelation();

    solve();

    print();


}

