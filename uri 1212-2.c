#include<stdio.h>
int main()
{
    long long a,b,n,m,c,carry;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        c=0;
        carry=0;
       if(n==0 && m==0)break;

       while(1)
       {
           a=n%10;

           b=m%10;

           n/=10;
           m/=10;

           if(a+b+c>=10)
           {
               carry++;
               c=1;
           }
           else c=0;

           if(n==0 && m==0)break;
       }
       if(carry==0)printf("No carry operation.\n");

         else if(carry==1)printf("1 carry operation.\n");

    else printf("%lld carry operations.\n",carry);
    }
    return 0;
}
