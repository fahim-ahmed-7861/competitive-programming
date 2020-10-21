#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x,y;
    scanf("%lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2);
    printf("a1=%lf\na2=%lf\nb1=%lf\nb2=%lf\nc1=%lf\nc2=%lf\n",a1,a2,b1,b2,c1,c2);

    x=(b1*c2-b2*c1)/(a1*b2-a2*b1);


    y=(a2*c1-a1*c2)/(a1*b2-a2*b1);

    printf("x=%.2lf\ny=%.2lf\n",x,y);



    return 0;
}
