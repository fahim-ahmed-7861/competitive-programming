#include<stdio.h>
int main()
{
    int n,m;

    scanf("%d %d",&n,&m);

    int s=n^m;

    printf("s=%d\n",s);

    if(s==0) puts("number are equal\n");

    else
         puts("Numbers are not equal\n");

    return 0;

}
