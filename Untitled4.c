#include<stdio.h>
#include<math.h>
int main()
{
    long long t,a,b,i,s,p,c;
    scanf("%lld",&t);

    while(t--)
    {
        c=0;
        scanf("%lld %lld",&a,&b);

        s=sqrt(b);

        p=s*s*s;
        if(a==1)a++;

        long long ara[p+10];

        double sum,sum1;
        for(i=a; i<=b; i++)
        {
            if(sum>=9)
           sum=(i/3)/3;

           else sum=1;
           sum1=sqrt(i);

           printf("%lf %lf\n",sum,sum1);

           if(sum!=floor(sum) || sum1!=floor(sum1))c++;
        }
        printf("%lld\n",c);

    }
    return 0;
}
