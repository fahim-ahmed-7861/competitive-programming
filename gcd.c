#include<stdio.h>
int main()
{

    int a,b,x,gcd;

    scanf("%d %d",&a,&b);

    printf("\na=%d\nb=%d\n",a,b);

    if(a<b){

        x=b;
    }
    else{

        x=a;
    }
    for( ;x>=1;x++) {

        if(x%a==0 && x%b==0){



           break;

        }
    }


    printf("LCD is :%d\n",x);

    return 0;

}

