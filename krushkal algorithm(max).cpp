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
//                               MU_Codefighter2018
//-------------------------------------------------------------------------------------------------------------------

vector<plll>v;

ll par[100005];

ll n,m;

void input()
{
     ll w, a,b;

     cin>>n>>m;

     for(int i=0; i<m; i++)
     {
         cin>>a>>b>>w;

         v.pb(mp(w,mp(a,b)));
     }
}

void makeset()
{
    for(int i=0; i<=Max; i++)
    {
        par[i]=i;
    }
}

int Find(int u)
{
    if(par[u]==u)return u;

    else return par[u]=Find(par[u]);
}

bool unioin(int u,int v)
{
     u=Find(u);

     v=Find(v);

     if(u==v)
     {
         return false;
     }

     else
     {
         par[v]=u;

         return true;
     }
}

ll Kruskal()
{
    ll sum=0,a,b,edge=0,i;

    //sort(v.begin(),v.end(),greater<plll>());



    for(i=0; i<m; i++)
    {
        a=v[i].S.F;
        b=v[i].S.S;

        if(unioin(a,b))
        {
            edge++;

            sum+=v[i].F;

            if(edge==n-1)
                break;
        }
    }

    return sum;
}

int main()
{
    input();

    makeset();

    cout<<Kruskal()<<endl;


}

/*

7 11
1 2 7
2 3 8
1 4 5
3 4 9
2 5 7
3 5 5
5 6 8
5 7 9
6 7 11
4 6 6
4 5 15
*/











