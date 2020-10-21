#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ara[100000],i,j,n,s,min,ara2[100000];

        scanf("%d %d",&n,&s);

        for(i=0; i<n; i++)scanf("%d",&ara[i]);

        for(i=0,j=0; i<n; i++)
        {
            if(ara[i]<s)continue;

            ara2[j]=ara[i];

            j++;

        }
         for(i=0; i<j-1; i++)
         {
             if(ara2[i]<ara2[i+1])break;
         }
         if(i==j-1)printf("YES\n");

         else printf("NO\n");
    }
    return 0;
}
