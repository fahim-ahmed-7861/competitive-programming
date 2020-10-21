#include<stdio.h>
int main()
{
    int x=10;
    int *
    p=1;
    x=&p;

    p= &x;



    printf("Adress of x is %d\n",x);
    printf("Adress of x is %p\n",&x);

    //printf("value of p=%d\n",*p);

}
