#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
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
    return (a*b)/__gcd(a,b);
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//-------------------------------------------------------------------------------------------------------------------

ll hash1,hash2,base=1331;
//ull  M=1e9+7;


ll hash_value(string str,int sz)
{
    ll sum=0;

    for(ll i=0; i<sz; i++)
    {
        sum=sum+(str[i]*pow(base,i));

      //  cout<<sum<<endl;
    }


    return sum;
}

int pattern_match(string str,int n,string ptr,int m)
{
  if(hash1==hash2)return 0;

  //cout<<1<<endl;
    for(ull i=m,j=0; i<n; i++,j++)
    {
        hash1-=(str[j]*pow(base,0));

        hash1/=base;

        hash1+=(str[i]*pow(base,m-1));

        if(hash1==hash2)
            return j;
    }

    return -1;
}

int main()
{
    fastread();

    ll n,m;

   string str,ptr;

     getline(cin,str);

     getline(cin,ptr);

    n=str.size();
    m=ptr.size();

   hash1=hash_value(str,m);

   hash2=hash_value(ptr,m);

    int pos=pattern_match(str,n,ptr,m);

   if(pos==-1)
    cout<<"NO";

    else
    {
        cout<<"YES";

        cout<<"Found at position :"<<pos<<endl;
    }


}

