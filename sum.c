#include<stdio.h>
int main()
{

    int a,b,sum;

    scanf("%d %d",&a,&b);

    if(a>b){

    sum=a-b;

        printf("%d\n",sum);
    }
    else{

    sum=b-a;

        printf("%d\n",sum);
    }
    return 0;
}
