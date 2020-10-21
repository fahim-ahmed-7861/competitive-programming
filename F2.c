#include<stdio.h>

int cube(int n)
{
    return n*n*n;
}

int main()
{
    int n;

    scanf("%d",&n);

    printf("%d\n",cube(n));
}
