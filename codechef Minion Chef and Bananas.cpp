#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     int t,n,k,i,sum=0;
     scanf("%d",&t);

     while(t--)
     {
         sum=0;
         scanf("%d %d",&n,&k);

         int ara[n+2];

         for(i=0; i<n; i++)
         {
             scanf("%d",&ara[i]);

             sum+=ara[i];
         }

         for(i=1; i<=k; i++)
         {
             if(sum%i==0)break;
         }
         printf("%d\n",sum/i);

     }
     return 0;

}

