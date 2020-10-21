#include<stdio.h>
int main()
{
    int a=0,i;
    for(i=1; ; ) {

        printf("%d\n",i);
        if(a==0)i++
        else if(a==1)
        i--;
        if(i==10)a=1;
        if(i==0)a=0;
    }
    return 0;
}
