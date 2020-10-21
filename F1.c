#include<stdio.h>

int square(int n)
{
    return n*n;
}

int main()
{
    int n;

    scanf("%d",&n);

    printf("%d\n",square(n));
}
