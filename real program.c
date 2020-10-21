#include<stdio.h>
int main()
{
    int a,b,sum1,sum2,sum3,sum4;
    char sign1='+',sign2='-',sign3='*',sign4='/';
    printf("please enter 2 input= ");
    scanf("%d %d",&a,&b);
    sum1=a+b,sum2=a-b,sum3=a*b,sum4=a/b;
    printf("%d%c%d=%d.\n%d%c%d=%d.\n%d%c%d=%d.\n%d%c%d=%d.\n",a,sign1,b,sum1,a,sign2,b,sum2,a,sign3,b,sum3,a,sign4,b,sum4);
    return 0;
}
