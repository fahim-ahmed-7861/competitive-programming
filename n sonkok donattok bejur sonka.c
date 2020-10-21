#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Enter the value of n: ");

    scanf("%d",&n);

    for(i=1;i<=n;i=i+2) {

        sum=sum+i;
    }

        printf("The result is:%d\n",sum);

        return 0;

}


