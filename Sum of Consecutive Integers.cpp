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
const int Max = 1e6;
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
vector<ll>prime;

bool ara[Max+12];

void PrimeInitialize()
{
    ara[0]=1;
    ara[1]=1;
    int i,j;
    for(i=4; i<=Max; i+=2)
        ara[i]=1;

    ll Sq=sqrt(Max);

        prime.pb(2);

    for(i=3; i<=Sq; i+=2)
    {
        if(ara[i]==0)
        {

           prime.pb(i);
            for(j=i*i; j<=Max; j+=i*2)
            {
                ara[j]=1;
            }
        }
    }

    for(i=Sq; i<=Max; i++)
        if(ara[i]==0)prime.pb(i);

}



ll DivisorCount(ll n)
{
    ll ans=1,ps=prime.size(),cnt;

    while(n%2==0)
    {
        n/=2;
    }


    for(int i=1; i<ps && prime[i]<=sqrt(n); i++)
    {
        cnt=1;

        while(n%prime[i]==0)
        {
            n/=prime[i];

            cnt++;
        }

        ans*=cnt;
    }

    if(n>1)
       ans*=2;

       return ans-1;
}
int main()
{
   fastread();

   PrimeInitialize();

   ll i=1,j,n,m,p,sum=0,k,t;

  cin>>t;


     while(t--)
     {
         cin>>n;

        cout<<DivisorCount(n)<<endl;
     }



}
