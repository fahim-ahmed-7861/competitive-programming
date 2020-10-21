#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2-1; j++)
        {
            if(i==j || i+j==n*2)
            {
                printf("* ");
            }
            else printf("  ");
        }
        printf("\n");
    }
}
