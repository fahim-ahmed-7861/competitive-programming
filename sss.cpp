#include<bits/stdc++.h>
using namespace std;
int m(int a,int b)
{
    return (a>b)?b:a;
}
int main()
{
    int c,t,i,j;

    scanf("%d %d",&c,&t);

    int ara[c+5][t+5],coin[c+1];

    for(i=0; i<c; i++)scanf("%d",&coin[i]);

    for(i=0; i<=c; i++)
    {
        ara[i][0]=0;
    }
    for(i=0; i<=t; i++)
    {
        ara[0][i]=i;
    }
    for(i=0; i<=t; i++)
    {
        if(ara[0][i]%coin[0]==0)
        {
            ara[1][i]=ara[0][i]/coin[0];
        }
        else ara[1][i]=0;
    }


    for(i=2; i<=c; i++)
    {
        for(j=1; j<=t; j++)
        {
           if(coin[i-1]>=j)
           {
            // ara[i][j]=m(ara[j-coin[i-1]],ara[i-1][j]);

             //ara[i][j]=m(ara[j-coin[i-1]],ara[i-1][j]);
                      }
           else
           {
               ara[i][j]=ara[i-1][j];
           }
        }
    }

    for(i=0; i<=c; i++)
    {
        for(j=0; j<=t; j++)
        {
            printf("%d ",ara[i][j]);
        }
        cout<<endl;
    }


}
