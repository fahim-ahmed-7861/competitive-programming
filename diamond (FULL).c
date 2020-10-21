#include<stdio.h>
int main()
{
    int i,j,k,s,n;
    scanf("%d",&n);
    if(n%2==0)n++;
    s=n/2;
    s++;
    k=s;


    for(i=1;i<=s; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i+j>=s+1 && i+j<=k+1)printf("* ");
            else printf("  ");
        }
        k+=2;
        printf("\n");
    }
    for(i=2; i<=s; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>=i && i+j<=n+1) printf("* ");

            else printf("  ");
        }

        printf("\n");
    }


}
