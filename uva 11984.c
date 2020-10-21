#include<stdio.h>
int main()
{
    int t,i=1;
    scanf("%d",&t);
    while(t--)
    {
        double f,sum,c,d;;
        scanf("%lf %lf",&c,&d);

        f=(((9*c)+160)/5);

        sum=f+d;

        sum=(((5*sum)-160)/9);

        printf("Case %d: %.2lf\n",i++,sum);

    }
    return 0;
}
