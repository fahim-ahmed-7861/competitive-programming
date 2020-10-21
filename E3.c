#include<stdio.h>

int main()
{
    int n,i,j,sum=0;

    scanf("%d",&n);

    int ara[n+1][n+1];

    int rsum[n+1],csum[n+1];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&ara[i][j]);
        }
        rsum[i]=0;
        csum[i]=0;
    }

    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            rsum[j]+=ara[j][i];

            csum[j]+=ara[i][j];
        }
    }


  printf("Row sum:\n");

  for(i=0; i<n; i++)printf("%d ",rsum[i]);


  printf("\nColumn sum:\n");

  for(i=0; i<n; i++)printf("%d ",csum[i]);




}

