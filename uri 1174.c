#include<stdio.h>
int main()
{
    int i,j;

    double ara[122];

    for(i=0; i<=99; i++)
    {
        scanf("%lf",&ara[i]);
    }
    for(i=0; i<100; i++)
    {
        if(ara[i]<=10)printf("A[%d] = %.1lf\n",i,ara[i]);
    }

    return 0;
}
