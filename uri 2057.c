#include<stdio.h>
int main()
{
    int n,m,x,sum;

    scanf("%d %d %d",&n,&m,&x);

    sum=n+m+x;

    if(sum<0)printf("%d\n",24+sum);

    else if(sum>=24)printf("%d\n",sum-24);

    else printf("%d\n",sum);

    return 0;
}

