#include<bits/stdc++.h>
using namespace std;
int lcs(char str[],int m,char ctr[],int n)
{
     int i,j;

     int Lcs[m+5][n+5];


     for(i=0; i<=m; i++)
     {
         for(j=0; j<=n; j++)
         {
             if(i==0 || j==0)

                 Lcs[i][j]=0;

             else if(str[i-1]==ctr[j-1])

                 Lcs[i][j]=Lcs[i-1][j-1]+1;

             else

                Lcs[i][j]=max(Lcs[i-1][j],Lcs[i][j-1]);
            }
     }

     return Lcs[m][n];
}
int main()
{
    char str[1010],ctr[1010];

    while(scanf(" %[^\n]",str))
    {
        if(str[0]=='#')break;
        scanf(" %[^\n]",ctr);
    int i,j,n,m;

    m=strlen(str);

    n=strlen(ctr);

    printf("%d\n",lcs(str,m,ctr,n));
    }
}
