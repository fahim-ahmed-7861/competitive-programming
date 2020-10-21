#include<stdio.h>
int main()
{
    int t,i,n,a,b,gcd;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);

        if(a>b)
        {
            for(i=a;i<=a*b;i++)
            {
                if(i%b==0 && i%a==0)
                {
                    break;
                }
            }
        }
        else if(b>a)
        {
            for(i=b;i<=a*b;i++)
            {
                if(i%b==0 && i%a==0)
                {
                    break;
                }
            }
        }
        gcd=(a*b)/i;

        printf("GCD = %d\n",gcd);
    }
}
