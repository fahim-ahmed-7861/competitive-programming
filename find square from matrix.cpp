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
    if(a==0 || b==0)return 0;

    return a/__gcd(a,b)*b;
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//                               MU_Codefighter2019
//-------------------------------------------------------------------------------------------------------------------

ll ara[1001][1001],arac[1001][1001],n,m;


void input()
{
    ll i,j;

    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
        {
            scanf("%d",&ara[i][j]);

            if(ara[i][j]==1)
            {
                arac[i][j]=arac[i-1][j]+1;
            }
            else arac[i][j]=0;


        }

}

void debug()
{
    ll i,j;

    cout<<"debug"<<endl;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<arac[i][j]<<" ";
        }cout<<endl;
    }
}



ll solution()
{
    ll mx=0,i,j;

    for(i=1; i<=n; i++)
        {
        for(j=1; j<=m; j++)
        {
            if(arac[i][j])
            {
               ll square= arac[i][j],len=1;

               ll pos=j;


                while(j<=m && len<=square)
                {
                    j++;

                    if(square>arac[i][j])
                    {
                        pos=j;

                        square=arac[i][j];
                    }

                    len++;
                }
              j=pos;



                mx=max(len-1,mx);
            }
        }
    }

    return mx;
}

int main()
{
   fastread();

   ll i,j,p,sum=3,k,t,a,b,c,d,cnt=0,q,cas=1;

     while(scanf("%d %d",&n,&m) && (n || m))
     {
        input();

       // debug();

       ll ans=solution();

       printf("%d\n",ans);
     }



}
