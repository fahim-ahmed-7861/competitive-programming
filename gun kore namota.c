#include<stdio.h>
int main()
{
    int sum,n,m;

    for(n=1;n<=20;n++){

        for(m=1;m<=10;m++){

            sum=n*m;
            printf("%d X %d=%d\n",n,m,sum);
        }
    }
    return 0;
}
