#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mp make_pair
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define N 10000000
#define m 3162
#define pb push_back

bitset<N>ara;

//int prime[10000];
vector<ll>prime;

void initialize_prime()
{
    int i,j;

    ara[0]=ara[1]=1;

    prime.pb(2);

    for(i=4; i<N; i++)
    {
        ara[i]=1;
    }

    for(i=3; i<=m; i+=2)
    {
        if(ara[i]==0)
        {
             prime.pb(i);
            for(j=i*i; j<N; j+=i*2)
                ara[j]=1;
        }
    }

    for(i=m; i<N; i++)
    {
        if(ara[i]==0)prime.pb(i);
    }
}
int prime_divisor(int n)
{
    int k=sqrt(n);

    int p=upper_bound (prime.begin(), prime.end(), k)-prime.begin();

    cout<<p<<endl;
}
int main()
{
    fastread();

   int n;

   initialize_prime();

   prime_divisor(9);
}

