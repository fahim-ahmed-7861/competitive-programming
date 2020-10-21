#include<stdio.h>
static int p=10;
void func()
{
    int a=10;

    static int s=10;

    a+=2;
    s+=2;
    p+=2;

    printf("a=%d  s=%d p=%d\n",a,s,p);
}
int main()
{
    p=90;

    func();
    func();
    func();


    return 0;
}
