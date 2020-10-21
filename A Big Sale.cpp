#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,n;
     double e,k;
     scanf("%d",&t);

     while(t--)
     {
         scanf("%d",&n);

         double p,q,d;

         double sum=0;

         for(i=0; i<n; i++)
         {
             scanf("%lf %lf %lf",&p,&q,&d);

             e=p+((d/100)*p);

             e=e-((d/100)*e);

             sum+=(p-e)*q;
         }
        printf("%.2lf\n",sum);
     }
     return 0;
}

