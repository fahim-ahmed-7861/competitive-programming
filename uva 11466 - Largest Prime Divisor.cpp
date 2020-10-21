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

    prime.push_back(2);

    for(i=4; i<N; i+=2)
    {
        ara[i]=1;
    }

    for(i=3; i<=m; i+=2)
    {
        if(ara[i]==0)
        {
             prime.push_back(i);
            for(j=i*i; j<N; j+=i*2)
                ara[j]=1;
        }
    }

}
int prime_divisor(int n)
{
    int k=n/2;

    int p=upper_bound (prime.begin(), prime.end(), k)-prime.begin();

      p--;

     if(p==-1)printf("-1\n");

     else
     {

     while(p>=0)
       {
           if(n%prime[p]==0)break;
        p--;
       }

       if(p==-1)printf("-1\n");

       else  printf("%d\n",prime[p]);
     }


}
int main()
{
    fastread();

   int a;

   initialize_prime();

   while(sf(a)==1 && a)
    {
        prime_divisor(a);
    }
}

