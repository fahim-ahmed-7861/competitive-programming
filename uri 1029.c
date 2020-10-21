#include<stdio.h>
int c=0;
int fibonacci(int n)
{
    c++;
    if(n==0 || n==1)
    {
        return n;
    }

    else return fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
    int n,i,t;
    scanf("%d",&t);

    while(t--)
    {
        c=0;

        scanf("%d",&n);

        printf("fib(%d) = %d calls = %d\n",n,c-1,fibonacci(n));
    }

    return 0;

}
