#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int a[100000];
    double sum=0;
    int sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sum=sum/n;
    for(i=0; i<n; i++)
    {
        if(sum-a[i]>0)
            sum1+=fabs(sum-a[i]);
        else
            sum2+=fabs(sum-a[i]);
    }
    if(sum2>sum1)
        sum1=sum2;
    printf("%d\n",sum1);
}
