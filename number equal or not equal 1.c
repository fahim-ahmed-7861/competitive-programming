#include<stdio.h>
int main()
{
    int n,m;

    scanf("%d %d",&n,&m);

    int s=n^m;

    printf("s=%d\n",s);

    if(n^m) printf("Numbers are not equal\n");

    else printf("number are equal\n");


}
