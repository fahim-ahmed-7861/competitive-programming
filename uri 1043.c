#include<stdio.h>
int main()
{
    double a,b,c,sum;

    scanf("%lf %lf %lf",&a,&b,&c);


    if(a+b>c && b+c>a && a+c>b )
   {
        sum=a+b+c;

        printf("Perimetro = %.1lf\n",sum);

   }

    else
    {
          sum=(a+b)*c;
       sum/=2;

       printf("Area = %.1lf\n",sum);
    }



    return 0;
}
