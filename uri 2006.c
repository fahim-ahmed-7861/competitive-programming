#include<stdio.h>
int main()
{
    int n,m,t=5,count=0;

    scanf("%d",&n);

    while(t--)
    {
        scanf("%d",&m);

        if(n==m)count++;
    }
    printf("%d\n",count);

    return 0;
}
