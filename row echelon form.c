#include<stdio.h>
int main()
{
    int r,c,i,j;

    double ara[100][100],sub,b;

    scanf("%d %d",&r,&c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%lf",&ara[i][j]);
        }
    }
    int p=0,k,h;
    while(p<r)
    {

    sub=ara[p][p];
    if(sub==0)
    {
     sub=ara[p][p+1];
    }
    for(j=0; j<c; j++)
    {
        ara[p][j]=ara[p][j]/sub;
    }
    h=p;
   for(i=p+1,k=p; i<r; i++,k++)
   {
       b=ara[i][p];
       for(j=0; j<c; j++)
       {
           ara[i][j]=(ara[i][j]-(b*ara[p][j]));
       }
   }


   p++;
    }

    printf("\n\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%.2lf ",ara[i][j]);
        }
        printf("\n");
    }
}
