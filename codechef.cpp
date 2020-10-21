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
const ll Mod =  998244353;
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

bool check(string str,string c)
{
    ll i=0,j=0,n=str.size(),m=c.size();


    while( i<n && str[i]==c[j])
    {


        j++;
        i++;

        if(j==m)j=0;
    }

    return (i==n);


}
long long bigmod(long long b,long long p,long long m)
{
    if(p==0)return 1;

    if(p%2==1){
        long long part1=b%m;
        long long part2=bigmod(b,p-1,m);

        return (part1*part2)%m;
    }
    else if(p%2==0)
    {
        long long half=bigmod(b,p/2,m);

        return (half*half)%m;
    }
}
ll ModularMultiplicativeInverse(ll a,ll m)
{
    return bigmod(a,m-2,m);
}
int main()
{

    fastread();

    ll i,j,n,m,p,a,sum=0,k,t,b,c,d,cnt=0,q,l,r;


    string str;

    bool flag=true;

    cin>>t;

    while(t--)
    {
        cin>>str;

        ll w[27];

        for(i=0; i<=25; i++)
            cin>>w[i];

        n=str.size();

        ll Q=(n*(n+1))/2,p=0;

        map<string,ll>kp,mp;





        for(i=0; i<n; i++)
        {
            sum=0;


            for(j=1; i+j<=n; j++)
            {


                string ptr=str.substr(i,j);

                kp[ptr]++;

               sum=(sum+w[str[i+j-1]-'a'])%Mod;

               mp[ptr]=sum;


            }
        }
        string ptr;

        cout<<kp.size()<<endl;

        for(auto x : kp)
        {
            m=x.F.size();

             sum=0;



            for(i=1; i<=m; i++)
            {
                ptr=x.F.substr(0,i);

                if(check(x.F,ptr))
                {
                  sum=(sum+mp[ptr])%Mod;
                }
            }

            p=(p+(sum*x.S))%Mod;

    //cout<<x.F<<" "<<p<<" "<<sum<<" "<<x.S<<endl;


        }
        cout<<p<<endl;

       cout<<(ModularMultiplicativeInverse(Q,Mod)*p)%Mod<<endl;
    }







}

