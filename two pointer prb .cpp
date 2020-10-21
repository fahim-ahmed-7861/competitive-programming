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
    return (a*b)/__gcd(a,b);
}
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//-------------------------------------------------------------------------------------------------------------------

void inputa(int ara[],int n)
{
    ull sum=0;

    for(int i=0; i<n; i++)
        cin>>ara[i];
}

void inputv(vector<int>v, int n)
{
    int k;
    ull sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>k;
        v.pb(k);
    }
}

int main()
{
   fastread();

   ull i,j,n,m,p=0,sum=0,k;

   bool flag=true;

   string str;


   cin>>k;

   cin>>str;

   ull sz=str.size(),knt=0;

   if(k)
   {
    knt=0;
    ull cnt=0;

       while(p<sz && str[p]=='0')
          p++,knt++;

          for(i=p; i<sz; i++)
          {
              if(str[i]=='1')
                cnt++;

              if(cnt>k)
              {
                  cnt--;

                  p++;
                  knt=0;

                  while(p<sz && str[p]=='0')p++,knt++;

              }

              if(cnt==k)
                sum+=(knt+1);

          }
   }
   else
   {
       knt=0;
       for(i=0; i<sz; i++)
       {
           if(str[i]=='0')
           {
               knt++;
           }
           else
           {
             sum+=((knt+1)*knt)/2;
               knt=0;
           }
       }
        sum+=((knt+1)*knt)/2;
   }
   cout<<sum<<endl;
}

