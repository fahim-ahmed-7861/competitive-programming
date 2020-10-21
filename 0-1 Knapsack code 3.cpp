#include<bits/stdc++.h>
using namespace std;
int ma(int a,int b)
{
    if(a>b)return a;
    else return b;
}
int main()
{
    int n,m;

    cin>>n>>m;

    int i,j,ara[n+2][m+2],id[n+2],weight[n+5],value[n+5];

    for(i=1; i<=n; i++)
    {
        cin>>id[i]>>value[i]>>weight[i];
    }

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
        {
           if(i==0 || j==0)ara[i][j]=0;

           else if(j<weight[i])
           {
               ara[i][j]=ara[i-1][j];
           }
           else
           {
               ara[i][j]=max(ara[i-1][j],value[i]+ara[i-1][j-weight[i]]);
           }
        }
    }
   // cout<<ara[n][m]<<endl;

    i=n;
    j=m;
    int select[n+5],p=0,sum=0;

    while(i>0 && j>0 && ara[i][j]!=0)
    {
        if(ara[i][j]==ara[i-1][j])i--;

        else
        {
            select[p++]=i;
            j=j-weight[i];
            sum+=weight[i];
            i--;
        }
    }

    for(i=p-1; i>=0; i--)cout<<select[i]<<" "<<endl;


    cout<<endl<<sum<<endl;
}
