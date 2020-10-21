#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<int,int>pii;
typedef pair<int,pair<int,int>>piii;
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
//#define mp make_pair
#define pb push_back
#define pp pop_back
#define eb emplace_back
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
const int MAX = 2e5 + 10;
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


vector<ll>slidingRMQ(ll ara[],ll n,ll k)
{
    deque<ll>dq;

    vector<ll>ans;

    for(int i=0; i<n; i++)
    {
        while(!dq.empty() && dq.front()>=ara[i])
            dq.pop_front();

        dq.push_front(ara[i]);

        if(i>=k &&ara[i-k]== dq.back())
            dq.pop_back();

        if(i>=k-1)
            ans.pb(dq.back());


    }

    return ans;

}

int main()
{
    fastread();

    ll n,m;

    cin>>n>>m;

    ll ara[n+1];

    for(int i=0; i<n; i++)
        cin>>ara[i];

    vector<ll>ans=slidingRMQ(ara,n,m);

    for(auto x : ans)
        cout<<x<<" ";
    cout<<endl;



}

