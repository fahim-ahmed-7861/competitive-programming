#include<bits/stdc++.h>
using namespace std;

int Edit_distance(string str,int m,string ctr,int n)
{
     int dp[m+2][n+2],i,j;

     for(i=0; i<=m; i++)
     {
         for(j=0; j<=n; j++)
         {
             if(i==0 || j==0)
             {
                 if(i==0) dp[i][j]=j;

                 else dp[i][j]=i;
             }

             else if(str[i-1]==ctr[j-1])
             {
                 dp[i][j]=dp[i-1][j-1];
             }
            else
            {
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
            }
         }
     }
     return dp[m][n];
}

int main()
{
    string str,ctr;

    getline(cin,str);

    getline(cin,ctr);

    int m=str.size(),n=ctr.size();

    printf("%d\n",Edit_distance(str,m,ctr,n));
}
