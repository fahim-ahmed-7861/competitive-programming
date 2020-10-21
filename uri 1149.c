#include<stdio.h>
int main()
{
    int a,n,i,k,sum=0;

    scanf("%d %d",&a,&n);

    //if(n<1)scanf("%d",&n);

    for(i=a,k=1; k<=n; k++,i++)
    {
        sum+=i;
    }
    printf("%d\n",sum);

    return 0;
}
