#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,i,k,f,b;
     scanf("%d",&t);

     while(t--)
     {
         f=b=0;
         scanf("%d",&n);

         int ara[n+5],cra[n+5];

         for(i=0; i<n; i++)scanf("%d",&ara[i]);

         for(i=0; i<n; i++)scanf("%d",&cra[i]);

         for(i=0,k=n-1; i<n; i++,k--)
         {
             if(cra[i]>=ara[i])f++;

             if(cra[k]>=ara[i])b++;
         }
         if(f==n && b==n)printf("both\n");

         else if(f==n)printf("front\n");

         else if(b==n)printf("back\n");

         else printf("none\n");
     }
     return 0;
}
