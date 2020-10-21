#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int ara[n+1],sum[n+1];

    int pre=0;

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];

        sum[i]=ara[i]+pre;

        pre=sum[i];
    }

    for(int i=0; i<n; i++)
        cout<<sum[i]<<" ";
}

/*
5
32 45 2 3 4
*/
