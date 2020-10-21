#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int s,p,sum=0,i;
        scanf("%d %d",&s,&p);
        while(s--)
        {
            sum=0;
            for(i=1; i<=p; i++)
            {
                sum+=i;
            }
            p=sum;
        }
        printf("%d\n",sum);
    }
    return 0;
}
