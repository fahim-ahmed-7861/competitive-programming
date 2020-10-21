#include<stdio.h>
int main()
{
    int i,j,k,s,n;
    scanf("%d",&n);
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

}
