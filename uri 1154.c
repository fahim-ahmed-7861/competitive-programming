#include<stdio.h>
int main()
{
    double sum=0,n;

    int i=0;

    while(scanf("%lf",&n)==1)
    {
        if(n<0)
        {
            printf("%.2lf\n",sum/i);
            return 0;
        }
        else
        {
            sum+=n;
            i++;
        }
    }
}
