#include<stdio.h>
int main()
{
    int a1,a2,b1,b2,c1,c2,d;
    double x,y;

    scanf("%d %d %d %d %d %d",&a1,&a2,&b1,&b2,&c1,&c2);

    printf("a1=%d,a2=%d,b1=%d,b2=%d,c1=%d,c2=%d\n",555555555555555555a1,a2,b1,b2,c1,c2);

    d=a1*b2-a2*b1;
    if(d==0) {

            printf("value of x and y cannot be detremined.\n");
    }
    else{

    x=(b2*c1-b1*c2)/d;

    y=(a1*c2-a2*c1)/d;

    printf("X=%.2lf , Y=%.2lf\n",x,y);
    }
    return 0;
}
