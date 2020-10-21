#include<stdio.h>
int main()
{
    int i,count=0;
    double sum=0;
    double ara[7];

    for(i=0; i<6; i++)
    {
        scanf("%lf",&ara[i]);
    }
    for(i=0; i<6; i++)
    {
        if(ara[i]>=0)
        {
            count++;
            sum+=ara[i];
        }
    }
    sum=sum/count;
    printf("%d valores positivos\n%.1lf\n",count,sum);
    return 0;

}
