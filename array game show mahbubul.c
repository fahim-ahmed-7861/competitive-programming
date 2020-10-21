#include<stdio.h>
int main()
{
    int i,a,n=10,id,ara[10];


    memset(ara,0,sizeof(ara));
   for(i=0; i<n; i++)
    {
        scanf("%d",&id);

        ara[id-1]++;
    }
     for(i=0; i<n; i++)printf("%d ",ara[i]);
     printf("\n");
     int max=0;
     for(i=0; i<n; i++)
     {
         if(max<ara[i])
         {
             max=ara[i];
             a=i;
         }
     }
     printf("Winner is %d and point : %d\n",a+1,max);


}
