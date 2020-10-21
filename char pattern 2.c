#include<stdio.h>
int main()
{
    int i,j,n,s,p,k;
    scanf("%d",&n);

    p=n*2-1;
    s=p/2;
    s+=2;
    k=s;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=p; j++)
        {
            if(i+j<=s)
            {
                printf("%c ",64+j);
            }
            else if(i+j>=k) printf("%c ",64+j-n);
            else printf("  ");
        }
        k+=2;
        printf("\n");
    }
}
