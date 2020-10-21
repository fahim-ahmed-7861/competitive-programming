#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n,a,sum=0;
         scanf("%d",&n);


        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);

            sum=sum|a;
        }
        printf("%d\n",sum);
    }
    return 0;
}
