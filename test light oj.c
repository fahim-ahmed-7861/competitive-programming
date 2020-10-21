#include<stdio.h>
int main()
{
    int h,m;
    xx:while(scanf("%d %d",&h,&m)!=EOF)
    {
        int i,j,sum=0,count=1,k=2;

        for(i=1; i<=m; i++)
        {
            scanf("%d",&j);

            sum+=j;
        }
        if(sum==h)
        {
            printf("Project will finish within 1 day.\n");
            goto xx;
        }
        else
        {
            j=sum;
            while(h>sum)
            {
               sum=j*k;
               k++;
               count++;
            }
        }
        printf("Project will finish within %d days.\n",count);

    }
     return 0;
}
