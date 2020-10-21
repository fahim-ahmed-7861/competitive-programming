#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<int,int>pii;
typedef pair<int,pair<int,int>>piii;
typedef pair<ll,pair<ll,ll>>plll;
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
//#define mp make_pair
#define pb push_back
#define pp pop_back
#define eb emplace_back
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
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

char ara[505][505];

int n,m,q,ans=0;

int dp[505][505];

bool visited[505][505];

bool flag=true;

void input()
{
    int i,j;

    scanf("%d %d %d",&n,&m,&q);

   char str[m+1];

    for(i=1; i<=n; i++)
    {
       scanf("%s",str);

        for(j=1; j<=m; j++)
            ara[i][j]=str[j-1];
    }

}

void Floodfill(int i,int j)
{
    if(i<1 || j<1 || i>n || j>m || ara[i][j]=='#' || visited[i][j])
        return ;

    if(ara[i][j]=='C')
        ans++;


   visited[i][j]=true;

    Floodfill(i+1,j);

    Floodfill(i-1,j);

    Floodfill(i,j+1);

    Floodfill(i,j-1);


}

void Clear()
{
      memset(dp,-1,sizeof(dp));

      memset(ara,'0',sizeof(ara));
}
void filldpvalue()
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            if(visited[i][j])dp[i][j]=ans;
    }
}

int main()
{
   // in;
  //  out;
    fastread();

    int t,cas=1,i,j;

    scanf("%d",&t);

    while(t--)
    {
        Clear();

        input();

        printf("Case %d:\n",cas++);



          while(q--)
          {
              flag=true;

              ans=0;

              scanf("%d %d",&i,&j);

              if(dp[i][j]==-1)
              {
                  Floodfill(i,j);

                  dp[i][j]=ans;

                  filldpvalue();

                  memset(visited,false,sizeof(visited));
              }

              printf("%d\n",dp[i][j]);
          }
    }




}
