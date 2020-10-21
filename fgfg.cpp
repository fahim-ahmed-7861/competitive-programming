#include<bits/stdc++.h>
using namespace std;
int lcs(string str,int m,string ctr,int n)
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
     for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {

            {
                printf("%d ",Lcs[i][j]);
            }
        }
        printf("\n");
    }

     return Lcs[m][n];
}
int main()
{
    string str,ctr;
    int i=1,j;


    while(getline(cin,str))
    {
        if(str[0]=='#')break;
        getline(cin,ctr);
   int n,m;

    m=str.size();

    n=ctr.size();

    printf("Case #%d: you can visit at most %d cities.\n",i++,lcs(str,m,ctr,n));
    }

}
