#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mp make_pair
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

bool ishappy(ll n)
{
    ll sum =0,num;

    if(n==1)return true;

    else if(n==89)return false;

    while(n!=0)
    {
        num=n%10;
        sum+=num*num;
        n/=10;
    }

    return ishappy(sum);
}

int main()
{
    fastread();
   ll n;

    ll i=1,t;

   // cin>>t;

       cin>>n;

   if(ishappy(n))printf("HAPPY\n");

   else printf("UNHAPPY\n");




  return 0;

}
