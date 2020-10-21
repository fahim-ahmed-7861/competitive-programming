#include<stdio.h>
int main()
{
    double x,y;
    int t;
    scanf("%d",&t);


    while(t--)
    {
            scanf("%lf %lf",&x,&y);

            if(y==0)printf("divisao impossivel\n");

            else
            {
                printf("%.1lf\n",x/y);
            }

    }
    return 0;
}

