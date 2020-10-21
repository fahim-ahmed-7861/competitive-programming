#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
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
//-------------------------------------------------------------------------------------------------------------------

void inputa(int ara[],int n)
{
    ull sum=0;

    for(int i=0; i<n; i++)
       cin>>ara[i];
}

//MU_Codefighter2018
int main()
{
   fastread();
    //freopen("input.txt","r",stdin);


     // freopen("output.txt","w",stdout);


      int i,j,n,m,p,sum=0,k,t,c=0;

        scanf("%d",&t);

          while(t--)
          {
              vector<pair<int,int>>v;

               vector<pair<int,int>>:: iterator it;

             scanf("%d",&n);
              int a,b;

              for(i=0; i<n-1; i++)
              {
                  scanf("%d %d",&a,&b);

                  if(a>b)swap(a,b);

                  v.pb(mp(a,b));
              }

              sort(v.begin(),v.end());
              int l=v.size();

              int cnt=0,k=v[0].F;

              for(i=0; i<l; i++)
              {
                  if(v[i].F!=k)
                  {
                      cnt++;
                      k=v[i].F;
                  }

                  if(cnt%2)
                  {
                      swap(v[i].F,v[i].S);
                  }
              }

            printf("Case %d:\n",++c);

              for(auto x : v)
              {
                  printf("%d %d\n",x.F,x.S);
              }

          }


}

