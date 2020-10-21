#include<bits/stdc++.h>
using namespace std;
int LCS(string str,int n,string ctr,int m)
{
   int i,j,ans=0;

   int lcs[n+2][m+2];

   for(i=0; i<=n; i++)
   {
       for(j=0; j<=m; j++)
       {
           if(i==0 || j==0 || str[i-1]!=ctr[j-1])
           {
               lcs[i][j]=0;
           }
           else
           {
               lcs[i][j]=lcs[i-1][j-1]+1;

               ans=max(lcs[i][j],ans);
           }
       }
   }
   return ans;
}
int main()
{
    string str,ctr;

    while(getline(cin,str))
    {

    getline(cin,ctr);

    int i,j,n,m;

    n=str.size();
    m=ctr.size();

    printf("%d\n",LCS(str,n,ctr,m));
    }

    return 0;


}
