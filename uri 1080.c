#include<stdio.h>
int main()
{
    int a,b,i,ara[101],max,p=0;

    for(i=0; i<100; i++)scanf("%d",&ara[i]);

    max=ara[0];

    for(i=1; i<100; i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
            p=i;
        }

    }
    printf("%d\n%d\n",max,p+1);

    return 0;

}
