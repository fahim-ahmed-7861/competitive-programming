#include<stdio.h>
int main()
{
    int n,i,g,k,p1,p2,sum1=0,sum2=0,max=0,min=0;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&p1,&p2);

        sum1+=p1; sum2+=p2;

        if(sum1>sum2)
        {
            k=sum1-sum2;

            if(k>max) max=k;
        }
        else
        {
            g=sum2-sum1;

            if(g>min)min=g;
        }
    }
    if(max>min) printf("1 %d\n",max);

    else printf("2 %d\n",min);

}
