#include<bits/stdc++.h>
using namespace std;
long long table[20][20];
int coin_way( long long S[], long long m, long long n )
{
    long long i, j, x, y;
    table[n+1][m+1];
    for (i=0; i<m; i++)
        table[0][i] = 1;
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
            y = (j >= 1)? table[i][j-1]: 0;

            table[i][j] = x + y;
        }
    }
  //  return table[n][m-1];
}
int main()
{
      long long coin[6]={1,5,10,25,50};

      long long c=5,t=300,taka;

    coin_way(coin,c,t);
   /* while(scanf("%lld",&taka)==1)
    {  if(table[c][taka]==1)
         cout << "There is only 1 way to produce " << taka << " cents change.\n";
       else   cout << "There are " << table[c][taka] << " ways to produce " << taka << " cents change.\n";
    }*/
    return 0;
}
