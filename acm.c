#include<stdio.h>
int main()
{
    int t,m,d,y,y1,i,n=1,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&d,&m,&y,&y1);
        count=0;
        if(d==29 && m==2)
        {
            for(i=y+1; i<=y1; i++)
            {
                if(i%4==0 && i%100!=0 || i%400==0)count++;

            }
        }
        else
        {
           count=y1-y;
        }
        printf("Case %d: %d\n",n,count);
        n++;
    }
    return 0;
}
