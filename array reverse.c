#include<stdio.h>
int main()
{
    int i,j,temp;

    int ara[]={10,20,30,40,50,60,70,80,90,100},ara1[100];


    for(i=0,j=9;i<10;i++,j--){

        temp=ara[i];
        ara[i]=ara1[j];
        ara1[j]=temp;


    }
    for(i=0;i<=9;i++){


    printf("%d\n",ara1[i]);

     }



    return 0;
}

