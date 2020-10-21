#include<stdio.h>
int mc91(int n)
{
    if (n > 100) return (n - 10);

    else  return mc91(mc91 (n + 11));
}
int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        if(n==0)break;

        printf("f91(%d) = %d\n",n,mc91(n));

    }


    return 0;
}
