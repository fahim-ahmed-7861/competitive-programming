#include<stdio.h>
int main()
{
    int i=1;


    for(i=1; i<=9;i+=2)
    {
        printf("I=%d J=%d\n",i,i+6);
        printf("I=%d J=%d\n",i,i+5);
        printf("I=%d J=%d\n",i,i+4);
    }

    return 0;
}

