#include<stdio.h>
int main()
{

    double n;

    int sum;

    scanf("%lf",&n);

    printf("NOTAS:\n",n);

    sum=n/100;

    printf("%d nota(s) de R$ 100.00\n",sum);

    n=n-(sum*100);

    sum=n/50;

    printf("%d nota(s) de R$ 50.00\n",sum);

    n=n-(sum*50);

    sum=n/20;

    printf("%d nota(s) de R$ 20.00\n",sum);

    n=n-(sum*20);

    sum=n/10;
    printf("%d nota(s) de R$ 10.00\n",sum);
    n=n-(sum*10);

    sum=n/5;
    printf("%d nota(s) de R$ 5.00\n",sum);

    n=n-(sum*5);

    sum=n/2;
    printf("%d nota(s) de R$ 2.00\n",sum);
    printf("MOEDAS:\n");
    n=n-(sum*2);


    sum=n/1;

    printf("%d moeda(s) de R$ 1.00\n",sum);
    n=n-(sum*1);


    sum=n/.5;

    printf("%d moeda(s) de R$ 0.50\n",sum);

    n=n-(sum*.5);

    sum=n/.25;
    printf("%d moeda(s) de R$ 0.25\n",sum);
    n=n-(sum*.25);

    sum=n/.10;
    printf("%d moeda(s) de R$ 0.10\n",sum);
    n=n-(sum*.10);

    sum=n/.05;
    printf("%d moeda(s) de R$ 0.05\n",sum);
    n=n-(sum*.05);

    sum=n/.01;
    printf("%d moeda(s) de R$ 0.01\n",sum);

    return 0;
}






