/*==============================================*\
ID:          shahidul_brur

Name:     Md. Shahidul Islam
Study:      CSE, BRUR
Address:  Rangpur, Bangladesh

 mail: shahidul.cse.brur@gmail.com
 FB  : fb.com/shahidul.brur
 Blog: shahidul-brur.blogspot.com(in Bengali),
       shahidul-brur-en.blogspot.com(in English)
\*===============================================*/
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
//using namespace __gnu_pbds;
using namespace std;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

//#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("avx,avx2,fma")

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
typedef pair<int, ll> il;
typedef vector<ii> vii;
typedef vector<il> vil;
typedef vector<li> vli;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz size()
#define all(a)  a.begin(), a.end()
#define mem(a, b)     memset(a, b, sizeof(a))
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};

const double pi = acos(-1.0);
const double eps = 1e-6;
const int mod = (int)1e9+7;
const int maxn = (int)3e5+5;
const int logn = 20;
int ara[maxn][12], n, m, a, b, idx[maxn];

bool ok(int x)
{
    set<int> masks;
    for(int i=1; i<=n; i++)
    {
        int mask = 0;

        for(int j=0; j<m; j++)
            if(ara[i][j]>=x)
                mask|=1<<j;

        if(mask==(1<<m)-1)
        {
            a=i;
            b=i;
            return 1;
        }
        idx[mask] = i;
        masks.insert(mask);
    }
    for(int mask1:masks)
    {
        for(int mask2:masks)
        {
            if((mask1|mask2)==((1<<m)-1))
            {
                a=idx[mask1];
                b=idx[mask2];
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ara[i][j];
        }
    }
    int lo = 0, hi = 1e9;
    while(lo<=hi)
    {
        int mid=(lo+hi)>>1;
        if(ok(mid))
            lo=mid+1;
        else
            hi=mid-1;
    }
    cout << a << " " << b;
    return 0;
}

/*

2 2
1 1
0 0

*/
