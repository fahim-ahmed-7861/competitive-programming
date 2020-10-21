#include<stdio.h>
int main()
{
 int i,j,n,a,p;

 scanf("%d",&n);

 p=(n*2)-1;

 for(i=1; i<=n; i++)
 {
     a=1;
     for(j=1; j<=p; j++)
     {
         if(i==1 || j>=i && i+j<=6 )
         {
             printf("%d ",a);
             j%3==0?a--:a++;
         }

         else printf(". ");
     }
     printf("\n");
 }
}
