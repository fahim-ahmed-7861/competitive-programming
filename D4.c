#include<stdio.h>

int main()
{

    int n=12,i;

    int ara[n+1];

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    int total=0,max=ara[0],min=ara[0];
    double avg;

    for(i=0; i<n; i++)
    {
        total+=ara[i];
    }

    avg=(double)total/n;


    for(i=1; i<n; i++)
    {
        if(max<ara[i])max=ara[i];

        if(min>ara[i])min=ara[i];
    }

    printf("Total TK : %d\nAverage Tk : %lf\nMinimum : %d\nMaximum : %d\n\n",total,avg,min,max);




}

