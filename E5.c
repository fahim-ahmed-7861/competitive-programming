#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    int ara[n+1][n+1],cra[n+1][n+1],diff[n+1][n+1];

    printf("1st matrix input\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }


   printf("2nd input:\n");
     for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&cra[i][j]);
        }
    }

    printf("difference output:\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            diff[i][j]=abs(ara[i][j]-cra[i][j]);
        }
    }

     for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",diff[i][j]);
        }
        printf("\n");

    }


}

