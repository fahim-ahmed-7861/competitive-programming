#include<stdio.h>

int main()
{
    int n=10,i;

    double ara[n+1],sum=0;

    for(i=0; i<n; i++)
    {
        scanf("%lf",&ara[i]);
    }

    for(i=0; i<n; i++)
    {
       sum=sum+ara[i];
    }

    double avg=(double)sum/n;

    for(i=0; i<n; i++)
    {
        if(avg<ara[i])
        {
            printf("%.3lf ",ara[i]);
        }
    }

    printf("\n\n");
}
