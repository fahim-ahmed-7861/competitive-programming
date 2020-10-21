#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        double a;

        scanf("%lf",&a);

        if(a<1500)a=a*2;

        else a+=((a/100)*98)+500;

        printf("%g\n",a);


    }

    return 0;
}
