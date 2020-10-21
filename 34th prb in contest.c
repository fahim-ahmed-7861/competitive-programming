#include<stdio.h>
long int gcd(long int a,long int b)
{
    long int temp;

    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    long int a,b,c,i,Lcm;
    int t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%ld %ld %ld",&a,&b,&c);

        Lcm=(a*b)/gcd(a,b);

        for(i=Lcm;i<=c;i+=Lcm)
        {
            if(i%a==0 && i%b==0)
            {
                printf("%ld\n",i);

            }
        }
        printf("\n");
    }
    return 0;
}
