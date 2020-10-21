#include<stdio.h>


double simple_interest(double p,double R,double t)
{
    double r=R/100;

    double A=p*(1+(r*t));

    return A;
}
int main()
{

     double p,R,t;

     scanf("%lf %lf %lf",&p,&R,&t);

     printf("%.3lf\n",simple_interest(p,R,t));
}
