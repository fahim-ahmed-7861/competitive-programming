#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int count=0,n,i,j,p,k=0,sum=0,sum1;
        scanf("%lld %lld",&n,&p);

        long long int ara[n];

        for(i=0; i<n; i++)
        {
            scanf("%lld",&ara[i]);
            k=k+i;
        }
        for(i=0; i<n; i++)
        {
            if(n>ara[i])
            {
                sum+=ara[i];
                count++;

            }
        }
       if(sum==k)
        {
            j=n+p;
            printf("%lld\n",j);
        }
       else
       {
          sum1=n-count;

          printf("%lld\n",sum1);
       }
      // for(i=0; i<n; i++)
      // {
         //  if
      // }


        //printf("%lld %lld\n",k,sum);


    }

    return 0;
}
