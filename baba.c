#include<stdio.h>
#include<math.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long a,k,count=0,sum,p;

        double i;

        scanf("%lld %lld",&a,&k);

        while(a--)
        {
             sum=(a*a)+(a*a*a);

             for(g=2; o<sum; g++)
             {
                 o=g*g;
             }
            // i=sqrt(sum);

            // p=i;

             if(o==sum)count++;

        }
        if(count==k)printf("I am married now\n");

        else printf("Baba amar ki biye hobe na\n");
    }
    return 0;
}
