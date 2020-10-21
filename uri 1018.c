#include<stdio.h>
int main()
{

    int n,sum;

    scanf("%d",&n);

    printf("%d\n",n);

    sum=n/100;

    printf("%d nota(s) de R$ 100,00\n",sum);

    n=n-(sum*100);

    sum=n/50;

    printf("%d nota(s) de R$ 50,00\n",sum);

    n=n-(sum*50);

    sum=n/20;

    printf("%d nota(s) de R$ 20,00\n",sum);

    n=n-(sum*20);

    sum=n/10;
    printf("%d nota(s) de R$ 10,00\n",sum);
    n=n-(sum*10);

    sum=n/5;
    printf("%d nota(s) de R$ 5,00\n",sum);

    n=n-(sum*5);

    sum=n/2;
    printf("%d nota(s) de R$ 2,00\n",sum);
    n=n-(sum*2);

    sum=n/1;
    printf("%d nota(s) de R$ 1,00\n",sum);

    return 0;
}






