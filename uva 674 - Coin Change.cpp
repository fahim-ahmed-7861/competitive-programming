#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=5,t=7489,i,j,taka;

   // scanf("%d",&t);

    int ara[c+5][t+5],p=0;

    int coin[6]={1,5,10,25,50};

    for(i=1; i<=c; i++)
    {
        ara[i][0]=1;
    }
    for(i=0; i<=t; i++)
    {
        ara[0][i]=i;
    }
    for(i=0; i<=t; i++)
    {
        if(ara[0][i]%coin[0]==0)
        {
            ara[1][i]=1;
        }
        else
            ara[1][i]=0;
    }
    for(i=2; i<=c; i++)
    {
        for(j=1; j<=t; j++)
        {
            if(coin[i-1]<=j)
            {



                ara[i][j]=ara[i][j-coin[i-1]]+ara[i-1][j];


            }
            else
            {
                ara[i][j]=ara[i-1][j];
            }
        }
    }

    while(scanf("%d",&taka)==1)
    {
        cout<<ara[c][taka]<<endl;
    }
    return 0;

}
