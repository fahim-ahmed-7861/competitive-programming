#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long ull;
typedef pair<ll,ll>pll;
//#define minheap int,vector<int>,greater<int>
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

ull pw[1000001],h[1000001],base=1610612741;
void preCalc()
{
    pw[0]=1;

    for(int i=1; i<=1000000; i++)
        pw[i]=pw[i-1]*base;
}

void setHash(ull s[],int n)
{


    h[0]=0;

    for(int i=1; i<=n; i++)
        {h[i]=h[i-1]*base+s[i];  }

}
ull pattern_Hash(ull s[],ull n)
{

    ull sum=s[0];

    for(int i=1; i<=n; i++)
        sum=sum*base+s[i];

    return sum;
}
ull gethash(ull l,ull r)
{
    return h[r]-h[l-1]*pw[r-l+1];
}
int main()
{
    fastread();

    preCalc();
     ull t,k=1;

    cin>>t;

    while(t--)
    {
        h[1000001]={0};
        ull i,j,n,m;

       cin>>n>>m;

       ull str[n+1],ptr[m+1];

       str[0]=0;
       ptr[0]=0;

       for(i=1; i<=n; i++)cin>>str[i];

        setHash(str,n);

        for(i=1; i<=m; i++)cin>>ptr[i];

        ull hash2= pattern_Hash(ptr,m),hash1;


        int cnt=-1;



        for(i=1; i+m<=n+1; i++)
        {
            hash1=gethash(i,i+m-1);

            if(hash1==hash2)
            {
               cnt=i;
               break;

            }
        }




        cout<<cnt<<endl;
    }

}
