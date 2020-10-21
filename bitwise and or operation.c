#include<stdio.h>
int main()
{
    int n1, n2,A,B;

    scanf("%d %d",&n1,&n2);

    A=n1 ^ n2;

    B=n1&n2;

    printf("A=%d B=%d\n",A,B);

    return 0;
}
