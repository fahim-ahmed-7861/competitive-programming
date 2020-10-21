#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,t,j,i;
    cin>>c>>t;

    int coin[c+1],ara[c+1][t+1],sc[t];

    for(i=0; i<c; i++)
        cin>>coin[i];

    for(i=0; i<c; i++)
        ara[i][0]=0;

    for(i=0; i<c; i++)
    {
        for(j=0; j<t; j++)
        {
            if(j==0)
                ara[i][j]=0;

            else if(i==0 && j==0)
            {
                if(j%coin[0]==0)
                {
                    ara[i][j]=j/coin[0];
                }
                else
                    ara[i][j]=0;
            }
            else if(ara[i-1][j]!=0  && ara[i][j-coin[i]]!=0)

                ara[i][j]=min(ara[i][j-coin[i]]+1,ara[i-1][j]);

        }
    }

}
