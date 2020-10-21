#include<stdio.h>
int main()
{
    int n,i;

    while(scanf("%d",&n)==1)
    {
     if(n==0)return 0;
    for(i=1; i<n; i++)printf("%d ",i);

    printf("%d\n",i);
    }
}
