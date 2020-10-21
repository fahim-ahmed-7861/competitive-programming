#include<stdio.h>
int main()
{
    int i,n,k;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(k=1; k<=n; k++)
        {
            if(i==1 || i==n || k==1 || k==n)
                printf("# ");

            else printf("  ");
        }
        printf("\n");

    }
    return 0;
}
