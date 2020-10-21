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
        for(i=a; i<=b; i++)ara[i]=0;

        for(i=2; i<=s; i++)
        {
            if(i*i<)
            ara[i*i]=1;
            ara[i*i*i]=1;
        }
        for(i=a; i<=b; i++)
        {
            if(ara[i]==0)c++;
        }
        printf("%lld\n",c);

    }
    return 0;
}
