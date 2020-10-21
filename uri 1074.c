#include<stdio.h>
int main()
{
    int i,j,n;

    scanf("%d",&n);
    int ara[n+1];

    for(i=0; i<n; i++) scanf("%d",&ara[i]);

    for(i=0; i<n; i++)
    {
       if(ara[i]==0)printf("NULL\n");

       else if(ara[i]%2==1 || ara[i]%2==-1)
       {
           if(ara[i]>0)printf("ODD POSITIVE\n");

           else printf("ODD NEGATIVE\n");
       }
       else
       {
           if(ara[i]>0)printf("EVEN POSITIVE\n");

           else printf("EVEN NEGATIVE\n");
       }
    }
    return 0;
}

