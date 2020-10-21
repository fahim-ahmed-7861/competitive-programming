#include<stdio.h>

int a;
static b;

void func()
{

    a=a+1;
    b=b+1;
}
int main()
{


    func();
    printf("a=%d b=%d\n",a,b);
}
