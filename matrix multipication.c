#include<stdio.h>
int main()
{
    int i,j,m,p,s,n,k;

   printf("plz input first matrix row and couloumn:\n");
   scanf("%d %d",&m,&p);

   int a[m][p];


   for(i=0; i<m; i++)
   {
       for(j=0; j<p; j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   printf("plz input 2nd matrix row and couloumn:\n");
   scanf("%d %d",&s,&n);

   int b[s][n];
   int sum[m][n];


   for(i=0; i<s; i++)
   {
       for(j=0; j<n; j++)
       {
           scanf("%d",&b[i][j]);
       }
   }
   if(s!=p)
   {
       printf("S!=P so cannot multiple\n");
       return 0;
   }

   else
   {
       for(i=0; i<m; i++)
       {
           for(j=0; j<n; j++)
           {
               sum[i][j]=0;
               for(k=0; k<p; k++)
               {
                   sum[i][j]+=a[i][k]*b[k][j];
               }
           }
       }
   }
   printf("output:\n");
   for(i=0; i<m; i++)
   {
       for(j=0; j<n; j++)
       {
           printf("%d ",sum[i][j]);
       }
       printf("\n");
   }

    return 0;

}
