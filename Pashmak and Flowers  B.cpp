#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i=0,sum,x=0,y=0;

    scanf("%lld",&n);

    long long ara[n+5];

    for(i=0; i<n; i++)
        scanf("%lld",&ara[i]);


    sort(ara,ara+n);

    i=0;


    while(ara[i]==ara[0])
    {
        i++;
        x++;
    }

    i=n-1;

    while(ara[n-1]==ara[i])
    {
        i--;
        y++;
    }


    if(ara[0]!=ara[n-1])
        printf("%lld %lld\n",ara[n-1]-ara[0],x*y);

    else
    {
        sum=(n-1)*n/2;
        printf("%lld %lld\n",ara[n-1]-ara[0],sum);
    }
}
