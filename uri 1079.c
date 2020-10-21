#include<stdio.h>
int main()
{
    double a,b,c;
    int t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%lf %lf %lf",&a,&b,&c);

        a=(a*2)+(b*3)+(c*5);
        a=a/10;

        printf("%.1lf\n",a);
    }
    return 0;

}
