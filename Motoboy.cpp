#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,v,j,m,item,w;

    while(scanf("%d",&item)==1)
    {
        if(item==0)
            break;

        scanf("%d",&m);
        int value[item+1],weight[m+1];

        for(i=1; i<=item; i++)
            cin>>value[i]>>weight[i];

        int ara[item+1][m+1];

        for(i=0; i<=m; i++)
        {
            ara[0][i]=0;
        }
        for(i=0; i<=item; i++)
        {
            ara[i][0]=0;
        }

        for(i=1; i<=item; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(j<weight[i])
                {
                    ara[i][j]=ara[i-1][j];
                }
                else
                {
                    v=value[i]+ara[i-1][j-weight[i]];

                    if(ara[i-1][j]>v)
                    {
                        ara[i][j]=ara[i-1][j];
                    }
                    else
                        ara[i][j]=v;
                }
            }
        }



        printf("%d min.\n",ara[item][m]);
    }
    return 0;
}
