/*
    -ensure correct output format
    -ensure printing required output
    -reread the problem statement
  */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define vll(v) v.begin(),v.end()
#define all(x) x.rbegin(),x.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define F first
#define S second
#define in  freopen("input.txt", "r", stdin)
#define out  freopen("output.txt", "w", stdout)
#define minheap int,vector<int>,greater<int>
#define pb push_back
#define eb emplace_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define bug cout<<"BUG"<<endl;
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
const double PI  =3.141592653589793238463;
bool compare(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.first > b.first);
}
ll lcm(ll a,ll b)
{
    if(a==0 || b==0)return 0;

    return a/__gcd(a,b)*b;
}

void input(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)cin>>ara[i];
}
void print(ll ara[],ll n)
{
    for(ll i=0; i<n; i++)
        cout<<ara[i]<<" ";
    cout<<endl;
}
ll tree[Max];

ll query(ll idx)
{
    ll sum=0;

    while(idx>0)
    {
        sum+=tree[idx];

        idx-= idx & (-idx);

    }

    return sum;
}

void update(ll idx,ll x,ll n)
{
    while(idx<=n)
    {
        tree[idx]+=x;

        idx+= idx & (-idx);
    }
}

int main()
{

    fastread();

    ll i,j,n,m,p,sum=0,k,t,c,d,cnt=0,q,l,r,ans=0;

    bool flag=false;


    string a,b;

    cin>>n;

    m=n/100;

    sum=(n-(n%100));

    sum*=m;

  if(sum)sum+=8;

    ll sz=n;

    m*=100;

    //cout<<n<<" "<<m<<endl;


    ans=0;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                a=to_string(i);
                b=to_string(j);

                if(a[0]==b[b.size()-1] && b[0]==a[a.size()-1])
                {
                   ans++;

                }
            }
        }



      /* if(sum) ans*=2;
       if(ans && sum)ans-=4;*/

        sum=ans;





    cout<<sum<<endl;




}

