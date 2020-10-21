#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    double ara[12],sum=0;
    char ch;

    scanf("%c",&ch);

    for(i=0; i<12; i++)
    {
        scanf("%lf",&ara[i]);
        sum+=ara[i];
    }

    if(ch=='S')
    {
        printf("%.1lf\n",sum);
    }
    else
    {
        printf("%.1lf\n",sum/12);
    }


    return 0;
}

