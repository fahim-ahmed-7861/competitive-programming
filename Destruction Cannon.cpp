#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,v,j,m,item,w,total,t;

    scanf("%d",&t);

    while(t--)
    {

        scanf("%d",&item);
        int value[item+1],weight[item+1];

        for(i=1; i<=item; i++)
            cin>>value[i]>>weight[i];

             scanf("%d %d",&m,&total);

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



        if(total<=ara[item][m])printf("Missao completada com sucesso\n");

        else printf("Falha na missao\n");
    }
    return 0;
}
