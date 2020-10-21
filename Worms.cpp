#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=1,i,t;
    scanf("%d",&n);
    int ara[n+5],sum[n+5];
    sum[0]=1;

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
        sum[i+1]=ara[i]+s;
        s=sum[i+1];
    }
    scanf("%d",&t);
    int cra[t+5];

    for(i=0; i<t; i++)scanf("%d",&cra[i]);

     for(i=0; i<t; i++)
     {
         printf("%d\n",upper_bound(sum,sum+n,cra[i])-sum);
     }

}
