#include<bits/stdc++.h>
using namespace std;
int main()
{

   int k,i,n;

   cin>>k>>n;

   int coin[k+5],dp[n+5];

   for(i=0; i<k; i++)cin>>coin[i];

   //fill(dp,dp+n,0);
    dp[0]=1;

    for(int j=1; j<=k; j++)
    {
        for(int i=n; i>=1; i--)
        {
            if((i>=coin[j])&&dp[i-coin[j]])
            {
                dp[i]=min(dp[i-coin[j]]+1,dp[i]);

           // cout<<coin[j]<<endl;
                }
        }
    }
    cout<<dp[n]<<endl;
}
