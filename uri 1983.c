#include<stdio.h>
int main()
{
    int n,x,i,id;

    double max,y;
    scanf("%d",&n);
    scanf("%d %lf",&x,&y);
    id=x;
    max=y;
    for(i=1; i<n; i++)
    {
         scanf("%d %lf",&x,&y);
         if(y>max)
         {
             max=y;
             id=x;
         }
    }
    if(max>=8)printf("%d\n",id);

    else printf("Minimum note not reached\n");
return 0;
}
