#include<stdio.h>
int main()
{
    int i,j;

    int num[]= {10,20,30,40,50,60,70,80,90,100};

    int num1[10];

    for(i=0,j=9; i<10; i++,j--)
    {
        num1[j]=num[i];
        num[i]=num1[i];
    }
    for(i=0;i<10;i++){

    printf("%d ",num[i]);
    }


    return 0;
}
