#include<stdio.h>
int main()
{

    int i=9,n=1;

    int num[10]= {10,20,30,40,50,60,70,80,90,100};

   for( ; i>=0 && i<10; i--,n++)
    {

        printf("%d is the element of=%d\n",n,num[i]);
    }


    return 0;
}

