#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mp make_pair
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

bool ara[10010];

void prime_generate()
{
    int i,n=10001,m=sqrt(n),j;

    ara[0]=ara[1]=1;

    for(i=4; i<n; i+=2)ara[i]=1;

    for(i=3; i<=m; i+=2)
    {
        for(j=i*i; j<n; j+=i*2)
            ara[j]=1;
    }
}

bool isprime(int n)
{
    if(ara[n]==false)return true;

    else return false;
}

bool ishappy(int n)
{
    int sum =0,num;

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
    prime_generate();
   int n,m,t;

   cin>>t;

   while(t--)
   {

   cin>>m>>n;

   printf("%d %d ",m,n);

   if(isprime(n) && ishappy(n))printf("YES\n");

   else printf("NO\n");
   }

  return 0;

}
