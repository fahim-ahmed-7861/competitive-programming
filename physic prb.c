#include<stdio.h>
int main()
{
    double s,v,t;

    printf("Enter the value of volumme v: ");

    scanf("%lf",&v);

    printf("Enter the value of time t: ");

    scanf("%lf",&t);

    s=2*v*t;

    printf("\nThe distance is : %.2lf\n",s);

    return 0;

}
