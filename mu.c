#include<stdio.h>
int main()
{
    long long a,b,i,j,g,sum,count,res;
    int t;
    scanf("%d",&t);

    while(t--)
    {
        sum=0;
        count=0;
        scanf("%lld %lld",&a,&b);

        for(i=a; i<=b; i++)
        {
            g=i;
            if(g>=0)
            {
                if(g>=10)
                {
                    while(g>=10)
                    {
                        res=g%10;
                        sum+=res;
                        g/=10;
                        count++;
                       // printf("%d\n",res);
                    }
                     sum+=g;
                     count++;
                }
                else{
                    res=g%10;
                   sum+=res;
                    g/=10;
                    count++;
                }
            }
        }
        printf("%lld %lld\n",count,sum);
    }


    return 0;


}
