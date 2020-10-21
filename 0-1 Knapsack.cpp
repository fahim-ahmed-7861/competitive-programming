#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,v,j,max,item,w;

    cin>>item>>max;

    int value[item+1],weight[max+1],id[100];

    for(i=1; i<=item; i++)
    cin>>id[i]>>value[i]>>weight[i];

    int ara[item+1][max+1];

    for(i=0; i<=max; i++)
    {
        ara[0][i]=0;
    }
    for(i=0; i<=item; i++)
    {
         ara[i][0]=0;
    }

    for(i=1; i<=item; i++)
    {
        for(j=1; j<=max; j++)
        {
            if(j<weight[i])
            {
                ara[i][j]=ara[i-1][j];
            }
            else
            {
                v=value[i]+ara[i-1][j-weight[i]];
                 // cout<<ara[i-1][j-weight[i]]<<endl;
                if(ara[i-1][j]>v)
                {
                    ara[i][j]=ara[i-1][j];
                }
                else ara[i][j]=v;
            }
        }
    }
    for(i=0; i<=item; i++)
    {
        for(j=0; j<=max; j++)
        {
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }

   j=max;


    printf("Max value : %d\n",ara[item][max]);

}
