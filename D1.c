#include<stdio.h>

int main()
{

    int n=10;

    int ara[n+1],i;

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    int num=1;

       for(i=0; i<n; i++,num++)
        {
            printf("mark %d : %d\n",num,ara[i]);

        }


}
