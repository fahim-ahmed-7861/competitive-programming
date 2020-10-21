#include<stdio.h>
int main()
{
    int n,h,m,s,k;

    scanf("%d",&n);
    k=n;

    h=n/3600;

    n=n-(h*3600);

    m=n/60;

    s=n-(m*60);

    printf("%d:%d:%d\n",h,m,s);

    return 0;

}
