#include<bits/stdc++.h>
using namespace std;
int value[1000],weight[10000];
int main()
{
    int n,i,v,j,maximum=32,item,w,t_weight=0,t;

    cin>>t;

    while(t--)
    {

    cin>>item;

    for(i=1; i<=item; i++)
        cin>>value[i]>>weight[i];

    int ara[item+1][maximum+1];

    for(i=0; i<=item; i++)
    {
        for(j=0; j<=maximum; j++)
        {
            if(i==0 || j==0)
                ara[i][j]=0;

            else if(j<weight[i])
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


    int m,ans=0;;
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        ans+=ara[item][m];
    }
    printf("%d\n",ans);
    }
    return 0;


}
