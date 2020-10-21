#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,sum=0;
    cin>>n;

    long long ara[n+1];

    for(i=0; i<n; i++)cin>>ara[i];


    long long p=accumulate(ara, ara+n, 0ll);

   cout<<p;

}

