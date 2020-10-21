#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
    int n,i,v,j,m=50,item,w,t_weight=0;

    scanf("%d",&item);

    int value[item+1],weight[m+1],select[100];

    for(i=1; i<=item; i++)
    scanf("%d %d",&value[i],&weight[i]);

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
                else ara[i][j]=v;
            }
        }
    }

   i=item;
   j=m;

   while(ara[i][j]!=0)
   {
       if(ara[i-1][j]==ara[i][j])i--;

       else
       {

           t_weight+=weight[i];

           j=j-weight[i];

           i--;
       }
   }

    printf("%d brinquedos\nPeso: %d kg\nsobra(m) %d pacote(s)\n",ara[item][m],t_weight,50-t_weight);

    }

    return 0;

}
