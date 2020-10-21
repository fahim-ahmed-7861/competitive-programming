#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int count=0,k=0,n,i,j,p;
        scanf("%lld %lld",&n,&p);

        long long int ara[n],sum=p-1;
        if(sum==-1)sum=0;

        for(i=0; i<n; i++)
        {
            scanf("%lld",&ara[i]);
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(ara[j]==k)
                {
                    count++;

                }

            }
            if(count<=i && p!=0)
            {
                count++;
                p--;
            }
            if(count<=i)break;

            else k++;

        }
        sum+=count+p;
        printf("%lld\n",sum);
    }

    return 0;
}
