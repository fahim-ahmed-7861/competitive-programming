#include<stdio.h>
int main()
{
    unsigned long long int n,sum,A;
    int T,i;
    scanf("%d",&T);

    while(T--)
    {
        sum=0;
        scanf("%llu",&n);
        A=n/2;
        for(i=1; i<=A; i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }


        }


        if(sum==n)
        {
            printf("YES, %llu is a perfect number!\n",n);
        }
        else
        {
            printf("NO, %llu is not a perfect number!\n",n);
        }
    }
    return 0;
}
