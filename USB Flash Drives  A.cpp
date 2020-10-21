#include<stdio.h>
int main()
{
    int n,m,a[1001],i,j,temp,sum=0,count=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        sum=sum+a[i];
        count++;
        if(sum>=m)break;
    }
    printf("%d\n",count);

    return 0;
}
