#include<stdio.h>
int main()
{
    int i,sum=0;

    for(i=0;i<=100;i++) {



        if(i==50 || i==25
           ){
            continue;
        }
        sum=sum+i;

    }

        printf("%d\n",sum);


    return 0;
}



