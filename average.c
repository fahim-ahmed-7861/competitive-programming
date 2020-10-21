#include<stdio.h>
int main()
{
    int i,n;

    float sum=0.0;

    printf("Total input: N number is: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

        scanf("%d",&i);

        sum=i+sum;

    }

    float average=sum/n;

    printf("%.2f",average);

    return 0;
}
