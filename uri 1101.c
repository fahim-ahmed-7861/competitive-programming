#include<stdio.h>
int main()
{
    int x,y,c,sum,s,i;


    while(scanf("%d %d",&x,&y)==2)
    {
        sum=0;

    if(x<=0 || y<=0)return 0;

    else if(x>y)
    {
        sum=(x*(x+1))/2;

        s=y-1;
        s=(s*(s+1))/2;

        sum=sum-s;

        for(i=y; i<=x; i++)printf("%d ",i);

        printf("Sum=%d\n",sum);
    }

    else
    {
         sum=(y*(y+1))/2;

        s=x-1;
        s=(s*(s+1))/2;

        sum=sum-s;

        for(i=x; i<=y; i++)printf("%d ",i);

        printf("Sum=%d\n",sum);
    }


    }
    return 0;
}

