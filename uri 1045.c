#include<stdio.h>
int main()
{
    int i,j;
    double temp,ara[3],a,b,c;

    scanf("%lf %lf %lf",&ara[0],&ara[1],&ara[2]);

    for(i=1; i<3; i++)
    {
        for(j=0; j<3-i; j++)
        {
            if(ara[j]<ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;

            }

        }
    }
    a=ara[0];
    b=ara[1];
    c=ara[2];

    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
        goto xx;
    }
    if(a*a==(b*b+c*c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if(a*a>(b*b+c*c))
    {
        printf("TRIANGULO OBTUSANGULO\n");

    }
    if(a*a<(b*b+c*c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if(a==b && c!=a ||b==c && a!=b || c==a && b!=a)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    xx:return 0;
}
