#include<stdio.h>
int main()
{
    int i,n;

    for(i=1; i<=5; i++)
    {
        for(n=1; n<=5; n++)
        {
            printf("%d %d-",n,i);
        }
        printf("\n");
    }
    return 0;
}

