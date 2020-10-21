#include<stdio.h>
int main()
{
    int t,ara[10000],i;
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    while(t--)
    {
       for(i=0; i<10; i++)scanf("%d",&ara[i]);


       if(ara[0]>ara[1])
       {
           for(i=0; i<9; i++)
           {
               if(ara[i]<ara[i+1])break;
           }
           if(i==9)printf("Ordered\n");
           else printf("Unordered\n");
       }
       else
       {
           for(i=0; i<9; i++)
           {
               if(ara[i]>ara[i+1])break;
           }
           if(i==9)printf("Ordered\n");
           else printf("Unordered\n");
       }
    }
    return 0;
}
