#include<stdio.h>
int main()
{

    char str[100];

    scanf("%s",str);

    double a,b,c;

    scanf("%lf %lf",&a,&b);

    c=a+((b/100)*15);

    printf("TOTAL = R$ %.2lf\n",c);

    return 0;
}



