#include<bits/stdc++.h>
using namespace std;

int com(int a,int b)
{
    return (a>b);
}

int main()
{
    int i,n;

    cin>>n;

    int ara[n+5];

    for(i=0; i<n; i++)cin>>ara[i];

    sort(ara,ara+n,com);

    sort(ara,ara+n,greater<int>());

    for(i=0; i<n; i++)cout<< ara[i]<<" ";
}
