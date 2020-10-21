#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,v,j,max,item,w,t_weight=0;

    cin>>max>>item;

    int value[item+1],weight[max+1],select[100],id[100];

    for(i=1; i<=item; i++)
    cin>>value[i]>>weight[i];

    int ara[item+1][max+1];

    for(i=0; i<=item; i++)
    {
        for(j=0; j<=max; j++)
        {
            if(i==0 || j==0)ara[i][j]=0;

            else if(j<weight[i])
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

  /* j=max;
   i=item;
  // j=max;
   int p=0;

   while(ara[i][j]!=0 && i>0 && j>0)
   {
       if(ara[i-1][j]==ara[i][j])i--;

       else
       {
           select[p++]=i;

           t_weight+=weight[i];

           j=j-weight[i];

           i--;
       }
   }

     printf("select item:\n");
    for(i=p-1; i>=0; i--)cout<<select[i]<<endl;
    printf("Max value : %d\nMax weight : %d\n",ara[item][max],t_weight);

    return 0;*/

}

/*

4 5
1 1 8
2 2 4
3 3 0
4 2 5
5 2 3

*/
