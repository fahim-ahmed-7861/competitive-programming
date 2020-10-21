#include<stdio.h>
int main()

{   int i;
    int num[5]={10,20,30,40,50};


    num.reverse();
    for(i=0;i<5;i++)
    {
        printf("%d ",num[i]);

    }
    return 0;
}

