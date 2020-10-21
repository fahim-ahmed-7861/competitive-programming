#include<stdio.h>
int main()
{
    long long year,k=0;
    while(scanf("%lld",&year)==1)
    {
        k=0;
        if(year%4==0 || year%400==0 && year%100)
        {k=1;
            printf("This is leap year.\n");

             if(year%55==0)
          {
            printf("This is bulukulu festival year.\n");

          }
        }
        if(year % 15==0)
        {

            printf("This is huluculu festival year.\n");
            k=1;
        }


        if(k==0)
            printf("This is an ordinary year.\n");
        printf("\n");
    }
    return 0;

}
