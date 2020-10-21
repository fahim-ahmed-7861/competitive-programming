#include<stdio.h>
int main()
{
    int T,x,i,n;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&x,&n);

        if(x>n)
        {
            printf("Invalid!\n");
        }
        for(i=x; i<=n; i=i+x)
        {
            printf("%d\n",i);
        }

        printf("\n");
    }
    return 0;
}
