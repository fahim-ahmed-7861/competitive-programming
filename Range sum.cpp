#include<bits/stdc++.h>
using namespace std;
int ara[10000];
long long sum[10000];

long long range_sum(int a,int z)
{
   return sum[z]-sum[a-1];
}

int main()
{
    int n,i,t,k,a,z;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        sum[i]=sum[i-1]+ara[i];
    }

    printf("How many test\n");

    cin>>t;

    while(t--)
    {
        cin>>a>>z;

        cout<<range_sum(a,z)<<endl;
    }
}
