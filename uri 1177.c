#include<stdio.h>
int main()
{
    int ara[1001],k=0,i,n;

    scanf("%d",&n);

    for(i=0; i<1000; i++)
    {

      if(k==n)k=0;

        printf("N[%d] = %d\n",i,k);
        k++;


    }
    return 0;
}
