#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    int ara[n+1][n+1];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }

    printf("\nOutput:\n");

     for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",ara[i][j]);
        }

    }


}
