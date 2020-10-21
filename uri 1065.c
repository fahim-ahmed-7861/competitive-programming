#include<stdio.h>
int main()
{
    int i,count=0,ara[7];

    for(i=0; i<5; i++)
    {
        scanf("%d",&ara[i]);

        if(ara[i]%2==0)count++;
    }

    printf("%d valores pares\n",count);
    return 0;

}
