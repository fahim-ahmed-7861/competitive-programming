#include<stdio.h>
int main()
{
    int i;

    double sum=0,k,h;

    for(i=1,k=1; i<=39; i+=2,k*=2)
    {
        sum+=i/k;

    }
    printf("%.2lf\n",sum);

    return 0;
}
