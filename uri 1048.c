#include<stdio.h>
int main()
{
    double n,b,c,sum;
     char ch='%';

    scanf("%lf",&n);



    if(n>=0 && n<=400)
   {
       sum=n/100;
       sum*=15;
       printf("Novo salario: %.2lf\n",sum+n);
       printf("Reajuste ganho: %.2lf\n",sum);
       printf("Em percentual: 15 %c\n",ch);
   }

    else if(400<n && n<=800)
    {
        sum=n/100;
       sum*=12;
       printf("Novo salario: %.2lf\n",sum+n);
       printf("Reajuste ganho: %.2lf\n",sum);
       printf("Em percentual: 12 %c\n",ch);
    }
    else if(800<n && n<=1200)
    {
        sum=n/100;
       sum*=10;
       printf("Novo salario: %.2lf\n",sum+n);
       printf("Reajuste ganho: %.2lf\n",sum);
       printf("Em percentual: 10 %c\n",ch);
    }
    else if(1200<n && n<=2000)
    {
        sum=n/100;
       sum*=7;
       printf("Novo salario: %.2lf\n",sum+n);
       printf("Reajuste ganho: %.2lf\n",sum);
       printf("Em percentual: 7 %c\n",ch);
    }


     else  {
         sum=n/100;
       sum*=4;
       printf("Novo salario: %.2lf\n",sum+n);
       printf("Reajuste ganho: %.2lf\n",sum);
       printf("Em percentual: 4 %c\n",ch);

    }



    return 0;
}

