#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
    int t,m,n,i,k;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        int a[m+5],b[n+5];
        k=0;
        for( i=0; i<m; i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            sum=(sum%MOD)+(b[i]%MOD);
            k++;

        }
        int sum1=0;
        for( i=0; i<m; i++)
        {
            int p= k*a[i]+sum;
            sum1=((sum1%MOD)+(p%MOD))%MOD;
        }
        cout<<sum1<<endl;
    }
    return 0;
}
