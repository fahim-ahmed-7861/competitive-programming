#include<stdio.h>|
int main()
{
    int a;
    scanf("%d",&a);

    if(a<33){

        printf("Fail");
    }
    else if(a<40){

        printf("D grade\n");
    }
    else if(a<50){

        printf("C grade\n");
    }
    else if(a<60){

        printf("B grade\n");
    }
    else if(a<70){

        printf("A- grade\n");
    }
    else if(a<80){

        printf("A\n");
    }
    else if(a<=100){

        printf("A+\n");
    }
    else{

        printf("invalid\n");
    }
    printf("Done!\n");
    return 0;
}


