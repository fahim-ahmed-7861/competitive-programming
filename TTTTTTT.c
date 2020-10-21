
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ara[100000],i,j,n,s,count=0;

        scanf("%d %d",&n,&s);

        for(i=0; i<n; i++)scanf("%d",&ara[i]);

         for(i=0; i<n-1; i++)
         {
             if(s<ara[i])count++;

             else if(s>ara[i])
             {
                 count--;


             if(ara[i-1]>ara[i+1] && ara[i-1]>s && ara[i+1]>s&&i!=0)count+=2;
             }

         }

         if(n==count+1)printf("YES\n");

         else printf("NO\n");
    }
    return 0;
}
