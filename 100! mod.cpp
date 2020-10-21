#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll> >pk;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define F first
#define S second
#define minheap int,vector<int>,greater<int>
#define mp make_pair
#define pb push_back
#define pp pop_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
bool compare(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}

int main()
{
   fastread();

   int i,fact=1,k;
   cin>>k;

   for(i=2; i<=100; i++)
   {
       fact=((fact%k)*(i%k))%k;
   }
   cout<<fact<<endl;
}
