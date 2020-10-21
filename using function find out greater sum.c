#include<stdio.h>
int sum1(int a,int b)
{
    return a+b;
}
int sum2(int a,int b)
{
    return a+b;
}

int main()
{
    int m,n,l,k;
    scanf("%d %d",&m,&n);
    scanf("%d %d",&l,&k);


    if(sum1(m,n)>sum2(l,k)) printf("sum1 is greater than sum2\n");

    else if(sum1(m,n)<sum2(l,k)) printf("sum2 is greater than sum1\n");

    else printf("EQUAL\n");
}

