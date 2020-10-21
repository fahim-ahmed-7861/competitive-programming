#include<stdio.h>
int main()
{
    int x=10;
    int *P;

    printf("Value of x: %d\n",x);

    p=&x;

    *p=20;

    printf("Value of x: %d\n",x);

    x=15;

    printf("Value of x:%d\n",x);
    printf("value sorted at location %p is %d\n",p,*p);

    printf("Adress of x: %p\n",&x);
    printf("value of p: %p\n",p);

    return 0;
}
