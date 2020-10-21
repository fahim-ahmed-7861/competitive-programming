#include<stdio.h>
int main()
{
    int t,k,x1,y1,x2,y2,x,y,n,i;
    scanf(“%d”,&t);
    for(k=1;k<=t;k++)
    {
        scanf(“%d%d%d%d%d”,&x1,&y1,&x2,&y2,&n);
        printf(“Case %d:n“,k);
        for(i=0;i<n;i++)
        {
            scanf(“%d%d”,&x,&y);
            if(x>x1 && x<x2 && y>y1 && y<y2)
            printf(“Yesn“);
            else printf(“Non“);
        }
    }
    return 0;
}
