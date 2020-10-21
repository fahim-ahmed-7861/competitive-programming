#include<stdio.h>
int main()
{
    int n,h,m,s,k;

    scanf("%d",&n);
    k=n;

    h=n/365;

    printf("%d ano(s)\n",h);

    n=n-(h*365);

    m=n/30;

    printf("%d mes(es)\n",m);

    s=n-(m*30);

    printf("%d dia(s)\n",s);

    return 0;

}
