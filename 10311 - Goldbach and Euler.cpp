#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define N 10010
#define m 100

bool ara[N];
vector<int>p;
int pt;

void prime()
{
    int i;
    ara[1]=ara[0]=1;
    for(i=4; i<=N; i+=2)
        ara[i]=1;

        p.push_back(2);

    for(i=3; i<=m; i+=2)
    {
        if(ara[i]==0)
        {
            p.push_back(i);
        for(int j=i*i; j<=N;  j+=i*2)

            ara[j]=1;
        }
    }
    for(i=m; i<=N; i++)
    {
        if(ara[i]==0)
            p.push_back(i);
    }
     pt=p.size();


}
int isprime(int n) {

    if(n < N)
    {
        if(ara[n])return 0;


        else return 1;
    }
    int s, i;

    s= sqrt(n);
   for(i = 0; i < pt && p[i] <= s; i++)
        if(n%p[i] == 0)
            return 0;
    return 1;
}
int main()
{
    fastread();

    prime();

    int k,i,sum,maximum,a,b;

    while(scanf("%d",&k)==1)
    {
       // dif=9999999;
        bool c=false;

        if(k==1)printf("%d is not the sum of two primes!\n",k);

        else if(k%2==1)
        {
            sum=k-2;


             if(isprime(sum))
                printf("%d is the sum of 2 and %d.\n",k,sum);

                else
                printf("%d is not the sum of two primes!\n",k);

        }

        else
        {

            maximum=k/2;
            maximum--;
            for(i=maximum; i>=3; i--)
            {
                if(isprime(i) && isprime(k-i))
                {
                        c=true;
                        sum=k-i;
                     break;

                }
            }
            if(c)
             printf("%d is the sum of %d and %d.\n",k,i,sum);

            else
                 printf("%d is not the sum of two primes!\n",k);

        }
    }
    return 0;

}
