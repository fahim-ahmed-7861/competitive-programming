#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,p,k;

   scanf("%d",&n);

   int ara[n+5],cra[n+5];

   for(i=0; i<n; i++)
   {
       scanf("%d",&ara[i]);
       cra[i]=ara[i];
   }
   k=n+1;

    sort(cra,cra+n);

    for(i=0; i<n; i++)
    {
        p=upper_bound(cra,cra+n,ara[i])-cra;

         printf("%d ",k-p);
    }

    return 0;

}
