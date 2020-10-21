#include<stdio.h>
int main()
{
    int a,b,sum1,sum2,sum3,sum4,sum5;
    printf("The first input is: ");
    scanf("%d",&a);
    printf("The second input is: ");
    scanf("%d",&b);
    sum1=a+b,sum2=a-b,sum3=a*b,sum4=a/b,
    sum5=a%b;
    printf("sum1 result is= %d\n",sum1);
    printf("sum2 result is= %d\n",sum2);
    printf("sum3 result is= %d\n",sum3);
    printf("sum4 result is= %d\n",sum4);
    printf("sum5 result is= %d\n",sum5);
    return 0;
}
