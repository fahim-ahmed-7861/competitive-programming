#include<stdio.h>
int main()
{
    int n,a=0,d=0,g=0;

    while(scanf("%d",&n)==1)
    {
        if(n==4)
        {
            printf("MUITO OBRIGADO\n");

            printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
            return 0;
        }

        else if(n==1)a++;

        else if(n==2)g++;

        else if(n==3)d++;

    }
}
