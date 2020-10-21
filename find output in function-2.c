#include<stdio.h>
int x=1,y=16;
void func(int z)
{
    z=z+1;
    x=x*x*x;

    y=y+12;

    printf("my func: x=%d\ty=%d\tz=%d\n",x,y,z);

    return;
}
int main()
{
    int z;
    z=23;
    x=5;
    y=12;
    func(z);
    x=15;
    y=111;

    printf("main, x=%d\ty=%d\tz=%d\n",x,y,z);

    func(z);

    y=3;
    x=2;

    func(y);

    return 0;
}
