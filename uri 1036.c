#include<stdio.h>
#include<math.h>
int main()
{

    double a,b,c,x1,x2;

    scanf("%lf %lf %lf",&a,&b,&c);

    if((b*b)-(4*a*c)>0 && a!=0 && b!=0 && c!=0)
    {

    x1=-b+sqrt((b*b)-(4*a*c));

    x1=x1/(2*a);

    printf("R1 = %.5lf\n",x1);

    x2=-b-sqrt((b*b)-(4*a*c));

    x2=x2/(2*a);

    printf("R2 = %.5lf\n",x2);
    }

    else
        printf("Impossivel calcular\n");
    return 0;
}
