#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();

    int t,i=1;

    cin>>t;

    ll sum=0,a,b,lcm=0,gcd=0;

    while(t--)
    {
        cin>>a>>b;
       gcd=__gcd(a,b);

       if(gcd==1)
       {
         printf("Case %d: %lld\n",i,a+b);
       }
       else
       {

           printf("Case %d: %lld\n",i,(a+b)/__gcd(a,b));
       }
       i++;
    }
    return 0;

}

