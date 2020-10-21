#include<stdio.h>
int main()
{
    int a,b;
    printf("Please enter a num:");
    scanf("%d",&a);
    printf("Please enter another num:");
    scanf("%d",&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);
    return 0;
}
