#include<stdio.h>
int main()
{
    int i,j,sum=0,average,k;
    scanf("%d",&j);

    for(i=1;i<=j;i++)
    {
        scanf("%d",&k);
        sum=sum+k;
    }
    average=sum/j;
    printf("%d",average);
    return 0;
}
