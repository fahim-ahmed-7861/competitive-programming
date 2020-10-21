#include<stdio.h>
int main()
{
    int T,n,p,sum;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&n);

        sum=n%10;
        while(n!=0)
        {
            p=n%10;
            n=n/10;

            if(n==0)
            {
                break;
            }
        }
        sum=sum+p;
        printf("Sum = %d",sum);
    }

    return 0;
}
