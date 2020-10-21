#include<stdio.h>
int main()
{
     long long int n,sum,b;
    int T,i;
    scanf("%d",&T);

    while(T--)
    {
        sum=0;
        scanf("%lld",&n);

        int ara[5]={6,28,496,8128,33550336};

        for(i=0; i<5; i++)
        {
            if(n>=ara[i])
                printf("%d\n",ara[i]);

            else break;
        }
        printf("\n");

    }
    return 0;
}
