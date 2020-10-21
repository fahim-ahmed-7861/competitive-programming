#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,m,t;

    double sum=0;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);

        if(n==1001)sum+=m*1.50;

        else if(n==1002)sum+=m*2.50;

        else if(n==1003)sum+=m*3.50;

        else if(n==1004)sum+=m*4.50;

        else if(n==1005)sum+=m*5.50;
    }
    printf("%.2lf\n",sum);

    return 0;
}

