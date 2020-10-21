#include<stdio.h>
int main()
{
    double n,sum=0;

    int count=0;

     while(scanf("%lf",&n)==1)
    {
        if(n==2)return 0;

        else if(n==1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            sum=0;
            count=0;
        }

        else if(n>=0 && n<=10)
        {
            sum+=n;
            count++;
            if(count==2)
            {
                count=0;
                printf("media = %.2lf\n",sum/2);
                printf("novo calculo (1-sim 2-nao)\n");
                sum=0;
            }
        }
        else
        {
            printf("nota invalida\n");

        }

    }
}
