#include<stdio.h>
int main()
{
    int T,n,i,temp,ara[100000],g;

    scanf("%d",&T);

    while(T--)
    {
        g=0;
        scanf("%d",&n);

        while(n!=0)
        {
            temp=n%10;
            n=n/10;
            ara[g]=temp;
            g++;
        }
        for(i=0;i<g;i++)
        {
            printf("%d",ara[i]);
        }
        printf("\n");
    }
    return 0;
}
