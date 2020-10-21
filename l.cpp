 #include<bits/stdc++.h>
using namespace std;
#define sf(a) scanf("%lld",&a);
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
//#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
ll divisor(ll n)
{
    int cnt = 0;
    ll k=sqrt(n);
    for (ll i=1; i<=k; i++)
    {
         if (n%i==0)
         {
            // If divisors are equal,
            // count only one
            if (n/i == i)
               cnt++;

            else // Otherwise count both
                cnt = cnt+2;
         }

        if(cnt>3)break;
     }
    return cnt;
}
int main()
{
    fastread();

    ll n,div,high,p=0;

    cin>>n;

   vector<ll>pra;

    ll i;
    ll ara[n+2];

    for(i=0; i<n; i++)
    {
        cin>>ara[i];

        if(p<ara[i])
        {
            high=ara[i];
            p=high;
        }
    }


      if(n>=50)
      {

    for(i=1; i<=high; i++)
    {
        div=divisor(i);

        if(div==3)pra[i]=1;

        else pra[i]=0;
    }


    for(i=0; i<n; i++)
    {

        if(pra[ara[i]]==1)printf("YES\n");

        else printf("NO\n");
    }
    }

    else
    {
       for(i=0; i<n; i++)
       {
           div=divisor(ara[i]);

           if(div==3)printf("YES\n");
             else printf("NO\n");
       }
    }


}
