#include<stdio.h>
int main()
{
    double n,m;
    char ch='%';

    scanf("%lf %lf",&n,&m);

    m=m-n;

    n=n/100;

    printf("%.2lf%c\n",m/n,ch);

    return 0;
}
