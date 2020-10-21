+#include<stdio.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }

    return n*factorial(n-1);

}
int main()
{
    int n;
    scanf("%d",&n);

    if(n<0)
    {
        printf("Undefined\n");
    }
    printf("Factorial of %d is %d\n",n,factorial(n));

    return 0;
}