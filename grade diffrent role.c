#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a<33){

        printf("Fail\n");
    }
    if(a>=33 && a<40){

        printf("D\n");
    }
    if(a>=40 && a<50){

        printf("C\n");
    }
    if(a>=50 && a<60){

        printf("B\n");
    }
    if(a>=60 && a<70){

        printf("a-\n");
    }
    if(a>=70 && a<80){

        printf("A\n");
    }
    if(a>=80 && a<101){

        printf("a+\n");
    }
    else if(100<a){
        printf("invalid\n");
    }
    return 0;
}
