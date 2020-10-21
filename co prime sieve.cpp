#include<bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
typedef int ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<int,int>pii;
typedef pair<int,pair<int,int>>piii;
typedef pair<ll,pair<ll,ll>>plll;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> orderedSet;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define sf(a) scanf("%I64d",&a)
#define pf(a) printf("%I64d\n",a)
#define mem(a,b)     memset(a,b,sizeof(a))
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
#define result(ans) cout<<"Case "<<cas++<<": "<<ans<<endl;
#define pb push_back
#define pp pop_back
#define eb emplace_back
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define bug cout<<"BUG"<<endl;
const int MAX = 1e7 ;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;
bool compare(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    if(a==0 || b==0)
        return 0;

    return a/__gcd(a,b)*b;
}

void input(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)
        cin>>ara[i];
}

ull phi[MAX+10];



void generatePhi() {



    phi[1] = 0;

    for (int i = 2; i <= MAX; i++) {
        if(!phi[i]) {
            phi[i] = i-1;
            for(int j = (i << 1); j <= MAX; j += i) {
                if(!phi[j]) phi[j] = j;
                phi[j] = phi[j] * (i-1) / i;
            }
        }
    }
}


void calculatePhi()
{
    for(int i=2; i<=MAX; i++)
        phi[i] = i;

    for(int i =2; i<=MAX; i++)
    {
        if(phi[i]==i)
        {
            for(int j=i; j<=MAX; j+=i)
                phi[j]-=phi[j]/i;
        }
    }
}

int main()
{

    fastread();

    ll i,j,n,m,p;

    unsigned  long long sum=0;

    ll k,cas=1,t,a,b,c,d,cnt=0,q;



    generatePhi();













   /* phi[0]=0;
    phi[1]=0;

    for(i=2; i<=MAX; i++)
    {
        phi[i]*=phi[i];

        phi[i]+=phi[i-1];
    }

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        sum=phi[b]-phi[a-1];

        //cout<<sum<<" "<<ans[a-1]<<" "<<ans[b]<<endl;

        //sum*=sum;

        result(sum)
    }*/

    cout<<phi[6]<<" ";














}
