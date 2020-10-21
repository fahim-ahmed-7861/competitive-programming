#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define N 1000000
#define m 3162

bool ara[N+1];
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

     cout<<pt<<endl;


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
    prime();


     //if(isprime(5407))cout<<"YES"<<endl;
}

