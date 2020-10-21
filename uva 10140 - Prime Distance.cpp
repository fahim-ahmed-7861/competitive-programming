#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

#define n 48000
ll p[n],size,k=2;
vector<long long>v;
bool a[n+1];
ll prime()
{
    int i,j,m=sqrt(n);

    a[0]=a[1]=1;

    for(i=4; i<=n; i+=2)
    {
        a[i]=1;
    }
    for(i=3; i<=m; i++)
    {
        for(j=i*i; j<=n; j+=i*2)
            a[j]=1;
    }

    for(i=2; i<=n; i++)
    {
        if(a[i]==0)
        {
            p[k]=i;
            k++;
        }
    }
}
ll isprime(ll t)
{
    if(t<n)
    {
        if(a[t]==0)return 1;

        else return 0;
    }

    else
    {
        int m=sqrt(t);

        for(int i=2; i<=k && p[i]<=m; i++)
        {
            if(t%p[i]==0)return 0;
        }
    }
    return 1;
}
void generate_prime(ll f, ll d)
{
    v.clear();
    for(ll i=f; i<=d; i++)
    {
        if(isprime(i))
            v.push_back(i);
    }
}
int main()
{
    fastread();

    ll a1,b1,g;
    ll a,b,c,d,e,f,l,m,sum;
    prime();

    while(cin>>a1>>b1)
    {

        generate_prime(a1,b1);
        m=9999999;
        l=a=b=c=d=0;
        sum=0;
        for(ll i=1; i<v.size(); i++)
        {
            sum=v[i]-v[i-1];

            if(sum<m)
            {
                m=sum;
                a=v[i-1];
                b=v[i];
            }
            if(sum>l)
            {
                l=sum;
                c=v[i-1];
                d=v[i];
            }
        }

        if(a==0 && b==0)
            printf("There are no adjacent primes.\n");

        else printf("%lld,%lld are closest, %lld,%lld are most distant.\n",a,b,c,d);
    }
    return 0;
}


