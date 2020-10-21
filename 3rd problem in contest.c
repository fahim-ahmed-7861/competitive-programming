#include<stdio.h>
int main()
{
    int i,p=0;

    for(i=1000;i>0;i--)
    {


        printf("%d\t",i);
        p++;
        if(p%5==0) printf("\n");
    }
    return 0;
}
