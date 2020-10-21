#include<stdio.h>
int sum(int b[])
{
    int i,sum=0;
    for(i=0; i<5; i++)
    {
        sum+=b[i];
    }
    return sum;
}
int main()
{
    int i,p,s,sum1[5],sum2[5];

    for(i=0; i<5; i++)
    {
        scanf("%d",&sum1[i]);
    }
    for(i=0; i<5; i++)
    {
        scanf("%d",&sum2[i]);
    }
    p=sum(sum1);
    s=sum(sum2);
    printf("sum1= %d  sum2=%d\n",p,s);

    if(sum(sum1)>sum(sum2)) printf("sum1 is greater\n");

    else printf("sum2 is greater\n");


}
